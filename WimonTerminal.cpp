#include <cfloat>
#include <SPI.h>
#include <config.h>
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
#include <HTTPClient.h> //fetch api
#include "WiMonTerminal.h"

// Constructor with initialization list
RF24 radio(RF_CE, RF_CS);
SPIClass *hspi = nullptr;
BlynkTimer blynkTimer;

// These are inits of some var to interact with Blynk Cloud
String WiMonTerminal::docMess = "Example: please take care of patient";
String WiMonTerminal::patientID = "Example: P0001";
String WiMonTerminal::patientName = "NOT_FOUND";
uint8_t WiMonTerminal::spo2 = 99;
uint16_t WiMonTerminal::hr = 1203;
uint16_t WiMonTerminal::temp_C = 32043;

WiMonTerminal::WiMonTerminal()
    : packetHistory(sizeof(WiMonPacket), 5, FIFO)
{
  wmAliveTimeS = 0;
  lastSentRequest = 0;
  lastGSPostRequest = 0;
  lastBlynkSendAlert = 0;
  hspi = new SPIClass(HSPI);
  hspi->begin();
  wmLedColor = YELLOW;
}
double wm_parse_packet_hr(WiMonPacket *pk)
{
  return ((double)pk->hr) / 100;
}
double wm_parse_packet_temp(WiMonPacket *pk)
{
  return ((double)pk->temp_C) / 1000;
}
void WiMonTerminal::init()
{

  Blynk.begin(auth, ssid, pass);
  blynkTimer.setInterval(BLYNK_INTERVAL, WiMonTerminal::bl_write_data);
  Serial.println("complete set up for wifi connection");

  wm_init_pins();
  wm_init_radio();
  wm_init_screen();
}

void WiMonTerminal::tick()
{
  if (millis() - lastTickMs >= 1000)
  {
    wmAliveTimeS++;
    lastTickMs = millis();
  }

  // Blynk part
  Blynk.run();
  blynkTimer.run();
  if (Blynk.connected())
  {
    wifiConnectState = CONNECTED;
  }
  else
  {
    Serial.println("Disconnected");
    wifiConnectState = DISCONNECTED;
  } // end blynk part

  wm_tick_buttons();
  wm_tick_led();

  if (wmSensorState == UNPAIRED)
  {
    wm_ping_sensor();
  }
  else if (wmSensorState == PAIRED)
  {
    wm_tick_data();
    if (packetHistory.isFull())
    {
      wm_check_data();
    }
  }

  // send data to google sheet with in interval of 10sec
  gs_post_vitals_record();

  wm_redraw_screen();
}

void WiMonTerminal::wm_init_pins()
{
  ledcAttach(LED_R, PWM_Freq, PWM_Res);
  ledcAttach(LED_G, PWM_Freq, PWM_Res);
  ledcAttach(LED_B, PWM_Freq, PWM_Res);
  pinMode(BTN_CHAN_UP, INPUT);
  pinMode(BTN_CHAN_DOWN, INPUT);
  pinMode(BTN_MID, INPUT);
}

void WiMonTerminal::wm_init_radio()
{
  if (!radio.begin(hspi))
  {
    wmTerminalStatus = RADIO_ERROR;
    Serial.println("Radio dead");
    wmLedColor = RED;
    radio.printDetails();
  }

  radio.setPALevel(RF24_PA_MIN);
  radio.setDataRate(RF24_2MBPS);
  radio.setChannel(channelNum);
  radio.openWritingPipe(radioAddresses[1]);
  radio.openReadingPipe(1, radioAddresses[0]);
}

void WiMonTerminal::wm_ping_sensor()
{
  if (millis() - lastSentRequest >= ACK_TIMEOUT)
  {
    Serial.println("Trying to find a sensor...");
    radio.stopListening();
    HandshakePacket pk;
    pk.presence = 1;
    radio.write(&pk, sizeof(pk));
    lastSentRequest = millis();
    radio.startListening();
  }

  if (radio.available())
  {
    AcknowledgementPacket ack;
    ack.mac = 0;
    radio.read(&ack, sizeof(ack));
    wmSensorMac = ack.mac;
    wmSensorState = PAIRED;
    lv_label_set_text(wm_sensorStatus, "#00ff00 OK");
  }
}

void WiMonTerminal::wm_tick_data()
{
  radio.startListening();
  if (radio.available())
  {
    WiMonPacket pk;
    radio.read(&pk, sizeof(WiMonPacket));
    if (pk.MAC == wmSensorMac)
    {
      WiMonTerminal::spo2 = pk.spo2;
      WiMonTerminal::hr = pk.hr;
      WiMonTerminal::temp_C = pk.temp_C;
      packetHistory.push(&pk);
      lastRecievedPacket = millis();
      // Render recieved data
      lv_label_set_text_fmt(wm_bpmLabel, "%d", pk.hr);
      lv_label_set_text_fmt(wm_spo2Label, "%d", pk.spo2);
      lv_label_set_text_fmt(wm_tempLabel, "%.2f", pk.temp_C);
    }
  }
  if (millis() - lastRecievedPacket >= TERMINAL_TIMEOUT_MS)
  {
    wmSensorState = UNPAIRED;
  }
}

void WiMonTerminal::wm_check_data()
{
  // Pre calculations
  double sumTemp = 0.0;
  double sumSpO2 = 0.0;
  double sumHR = 0.0;
  double maxTemp = -DBL_MAX;
  double maxSpO2 = -DBL_MAX;
  double maxHR = -DBL_MAX;
  double minTemp = DBL_MAX;
  double minSpO2 = DBL_MAX;
  double minHR = DBL_MAX;

  for (int i = 0; i < 5; i++)
  {
    WiMonPacket buf;
    packetHistory.peekIdx(&buf, i);

    double hr = wm_parse_packet_hr(&buf);
    double temp = wm_parse_packet_temp(&buf);
    double spo2 = static_cast<double>(buf.spo2);
    boolean isCritical = false;

    // Sum
    sumHR += hr;
    sumTemp += temp;
    sumSpO2 += spo2;

    // Max
    if (hr > maxHR)
      maxHR = hr;
    if (temp > maxTemp)
      maxTemp = temp;
    if (spo2 > maxSpO2)
      maxSpO2 = spo2;

    // Min
    if (hr < minHR)
      minHR = hr;
    if (temp < minTemp)
      minTemp = temp;
    if (spo2 < minSpO2)
      minSpO2 = spo2;
  }
  double meanTemp = sumTemp / 5.0;
  double meanSpO2 = sumSpO2 / 5.0;
  double meanHR = sumHR / 5.0;

  // Destablization flow
  if (meanTemp > TEMP_MAX || meanTemp < TEMP_MIN)
  {
    tempStatus = ValueStatus::CRITICAL;
    isCritical = true;
  }
  if (meanSpO2 < SPO2_MIN)
  {
    spo2Status = ValueStatus::CRITICAL;
    isCritical = true;
  }
  if (meanHR > HR_MAX || meanHR < HR_MIN)
  {
    hrStatus = ValueStatus::CRITICAL;
    isCritical = true;
  }
  if (maxHR - minHR >= HR_MAX_DEV)
  {
    hrStatus = ValueStatus::CRITICAL;
    isCritical = true;
  }
  if (maxSpO2 - minSpO2 >= SPO2_MAX_DEV)
  {
    spo2Status = ValueStatus::CRITICAL;
    isCritical = true;
  }
  if (maxTemp - minTemp >= TEMP_MAX_DEV)
  {
    tempStatus = ValueStatus::CRITICAL;
    isCritical = true;
  }

  // Stablization flow
  // Stabilization flow
  if (meanTemp <= TEMP_MAX && meanTemp >= TEMP_MIN && (maxTemp - minTemp) < TEMP_MAX_DEV)
  {
    tempStatus = ValueStatus::STABLE;
  }
  if (meanSpO2 >= SPO2_MIN && (maxSpO2 - minSpO2) < SPO2_MAX_DEV)
  {
    spo2Status = ValueStatus::STABLE;
  }
  if (meanHR <= HR_MAX && meanHR >= HR_MIN && (maxHR - minHR) < HR_MAX_DEV)
  {
    hrStatus = ValueStatus::STABLE;
  }

  if (isCritical == true)
  { // send alert if there is critical status of vitals
    bl_send_alert();
  }
}

void WiMonTerminal::wm_tick_led()
{
  // Set RGB values based on the selected color
  int red = 0, green = 0, blue = 0;
  switch (wmLedColor)
  {
  case RED:
    red = 255;
    break;
  case YELLOW:
    red = 255;
    green = 255;
    break;
  case GREEN:
    green = 255;
    break;
  }

  // Apply the duty cycle to the respective channels
  ledcWrite(LED_R, red);
  ledcWrite(LED_G, green);
  ledcWrite(LED_B, blue);
}

void WiMonTerminal::wm_on_chann_up_press()
{
  channelNum++;
  wmSensorMac = 0;
  wmSensorState = UNPAIRED;
  Serial.println("Up btn pressed");
}

void WiMonTerminal::wm_on_chann_mid_press()
{
  // Handle middle button press
  Serial.println("Mid btn pressed");
}

void WiMonTerminal::wm_on_chann_down_press()
{
  channelNum--;
  wmSensorMac = 0;
  wmSensorState = UNPAIRED;
  Serial.println("Down btn pressed");
}

void WiMonTerminal::wm_tick_buttons()
{
  bool isChannUpBtnCurrentlyPressed = digitalRead(BTN_CHAN_UP) == HIGH;

  if (isChannUpBtnPressed != isChannUpBtnCurrentlyPressed)
  {
    if (isChannUpBtnCurrentlyPressed)
    {
      upBtnLastPressedTime = millis();
      wm_on_chann_up_press();
    }
  }
  else if (isChannUpBtnPressed && millis() - upBtnLastPressedTime >= DEBOUNCE_MS)
  {
    wm_on_chann_up_press();
    upBtnLastPressedTime = millis();
  }
  isChannUpBtnPressed = isChannUpBtnCurrentlyPressed;

  // Handle Channel Down Button
  bool isChannDownCurrentlyPressed = digitalRead(BTN_CHAN_DOWN) == HIGH;

  if (isChannDownBtnPressed != isChannDownCurrentlyPressed)
  {
    if (isChannDownCurrentlyPressed)
    {
      downBtnLastPressedTime = millis();
      wm_on_chann_down_press();
    }
  }
  else if (isChannDownBtnPressed && millis() - downBtnLastPressedTime >= DEBOUNCE_MS)
  {
    wm_on_chann_down_press();
    downBtnLastPressedTime = millis();
  }
  isChannDownBtnPressed = isChannDownCurrentlyPressed;

  // Handle Middle Button
  bool isChannMidBtnCurrentlyPressed = digitalRead(BTN_MID) == HIGH;

  if (isChannMidBtnPressed != isChannMidBtnCurrentlyPressed)
  {
    if (isChannMidBtnCurrentlyPressed)
    {
      midBtnLastPressedTime = millis();
      wm_on_chann_mid_press();
    }
  }
  else if (isChannMidBtnPressed && millis() - midBtnLastPressedTime >= DEBOUNCE_MS)
  {
    wm_on_chann_mid_press();
    midBtnLastPressedTime = millis();
  }
  isChannMidBtnPressed = isChannMidBtnCurrentlyPressed;
}

/*
  Blynk part
*/
void WiMonTerminal::bl_write_data()
{
  Blynk.virtualWrite(SPO2_VP, WiMonTerminal::spo2);
  Blynk.virtualWrite(HR_VP, ((double)WiMonTerminal::hr) / 100);
  Blynk.virtualWrite(TEMP_VP, ((double)WiMonTerminal::temp_C) / 1000);
  Serial.println("Upload data to cloud");
}

void WiMonTerminal::bl_send_alert()
{
  if (Blynk.connected())
  { // check WiFi connection
    if (millis() - lastBlynkSendAlert >= SEND_ALERT_INTERVAL)
    { // Check interval
      String message = "Please aware of patient's vitals: patientID = " + WiMonTerminal::patientID + ", patientName = " + WiMonTerminal::patientName;
      Blynk.logEvent("vitals_alert", message);
      lastBlynkSendAlert = millis();
      Serial.println("Send alert: " + message);
    }
  }
}

BLYNK_WRITE(PATIENT_ID_VP)
{
  WiMonTerminal::patientID = param.asStr();
  Serial.println("Receive Patient ID from Blynk server:" + WiMonTerminal::patientID);
  gs_fetch_patient_name();
}

BLYNK_WRITE(DOC_MESS_VP)
{
  WiMonTerminal::docMess = param.asStr();
  Serial.println("Receive Doctor Message from Blynk server:" + WiMonTerminal::docMess);
}

/*
  Google Sheet % Apps Script
*/
void WiMonTerminal::gs_fetch_patient_name()
{
  if (Blynk.connected())
  { // check WiFi connection
    HTTPClient http;
    http.begin(ENDPOINT_API_URL + "?patientID=" + WiMonTerminal::patientID);
    http.setFollowRedirects(HTTPC_STRICT_FOLLOW_REDIRECTS);
    http.GET();
    WiMonTerminal::patientName = http.getString();
    Serial.println("PatientName = " + WiMonTerminal::patientName);
    http.end();
  }
}

void WiMonTerminal::gs_post_vitals_record()
{
  if (Blynk.connected())
  { // check WiFi connection
    if (millis() - lastlastGSPostRequest >= POST_INTERVAL)
    { // Check interval
      HTTPClient http;
      http.begin(ENDPOINT_API_URL);
      http.addHeader("Content-Type", "application/json");

      String jsonData = "{\"patientID\":\"" + WiMonTerminal::patientID +
                        "\", \"spo2\": " + String(WiMonTerminal::spo2) +
                        ", \"hr\": " + String((double)WiMonTerminal::hr / 100) +
                        ", \"temp\": " + String((double)WiMonTerminal::temp_C / 1000) + "}";

      http.POST(jsonData);
      http.end();
      lastlastGSPostRequest = millis();
    }
  }
}
