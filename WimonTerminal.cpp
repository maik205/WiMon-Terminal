#include <stdint.h>
#include <lvgl.h>
#include <TFT_eSPI.h>
#include <RF24.h>
#include <cfloat>
#include <SPI.h>

#include "WiMonTerminal.h"

// Constructor with initialization list
RF24 radio(RF_CE, RF_CS);
SPIClass *hspi = nullptr;
WiMonTerminal::WiMonTerminal()
  : packetHistory(sizeof(WiMonPacket), 5, FIFO) {
  wmAliveTimeS = 0;
  lastSentRequest = 0;
  hspi = new SPIClass(HSPI);
  hspi->begin();
  wmLedColor = YELLOW;
}
double wm_parse_packet_hr(WiMonPacket *pk) {
  return ((double)pk->hr) / 100;
}
double wm_parse_packet_temp(WiMonPacket *pk) {
  return ((double)pk->temp_C) / 1000;
}
void WiMonTerminal::init() {
  wm_init_pins();
  wm_init_radio();
  wm_init_screen();
}

void WiMonTerminal::tick() {
  if (millis() - lastTickMs >= 1000) {
    wmAliveTimeS++;
    lastTickMs = millis();
  }

  wm_tick_buttons();
  wm_tick_led();

  if (wmSensorState == UNPAIRED) {
    wm_ping_sensor();
  } else if (wmSensorState == PAIRED) {
    wm_tick_data();
    if (packetHistory.isFull()) {
      wm_check_data();
    }
  }
  wm_redraw_screen();
}

void WiMonTerminal::wm_init_pins() {
  ledcAttach(LED_R, PWM_Freq, PWM_Res);
  ledcAttach(LED_G, PWM_Freq, PWM_Res);
  ledcAttach(LED_B, PWM_Freq, PWM_Res);
  pinMode(BTN_CHAN_UP, INPUT);
  pinMode(BTN_CHAN_DOWN, INPUT);
  pinMode(BTN_MID, INPUT);
}

void WiMonTerminal::wm_init_radio() {
  if (!radio.begin(hspi)) {
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

void WiMonTerminal::wm_ping_sensor() {
  if (millis() - lastSentRequest >= ACK_TIMEOUT) {
    Serial.println("Trying to find a sensor...");
    radio.stopListening();
    HandshakePacket pk;
    pk.presence = 1;
    radio.write(&pk, sizeof(pk));
    lastSentRequest = millis();
    radio.startListening();
  }

  if (radio.available()) {
    AcknowledgementPacket ack;
    ack.mac = 0;
    radio.read(&ack, sizeof(ack));
    wmSensorMac = ack.mac;
    wmSensorState = PAIRED;
    lv_label_set_text(wm_sensorStatus, "#00ff00 OK");
  }
}

void WiMonTerminal::wm_tick_data() {
  radio.startListening();
  if (radio.available()) {
    WiMonPacket pk;
    radio.read(&pk, sizeof(WiMonPacket));
    if (pk.MAC == wmSensorMac) {
      packetHistory.push(&pk);
      lastRecievedPacket = millis();
      // Render recieved data
      lv_label_set_text_fmt(wm_bpmLabel, "%d", pk.hr);
      lv_label_set_text_fmt(wm_spo2Label, "%d", pk.spo2);
      lv_label_set_text_fmt(wm_tempLabel, "%.2f", pk.temp_C);
    }
  }
  if (millis() - lastRecievedPacket >= TERMINAL_TIMEOUT_MS) {
    wmSensorState = UNPAIRED;
  }
}

void WiMonTerminal::wm_check_data() {
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

  for (int i = 0; i < 5; i++) {
    WiMonPacket buf;
    packetHistory.peekIdx(&buf, i);

    double hr = wm_parse_packet_hr(&buf);
    double temp = wm_parse_packet_temp(&buf);
    double spo2 = static_cast<double>(buf.spo2);

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
  if (meanTemp > TEMP_MAX || meanTemp < TEMP_MIN) {
    tempStatus = ValueStatus::CRITICAL;
  }
  if (meanSpO2 < SPO2_MIN) {
    spo2Status = ValueStatus::CRITICAL;
  }
  if (meanHR > HR_MAX || meanHR < HR_MIN) {
    hrStatus = ValueStatus::CRITICAL;
  }
  if (maxHR - minHR >= HR_MAX_DEV) {
    hrStatus = ValueStatus::CRITICAL;
  }
  if (maxSpO2 - minSpO2 >= SPO2_MAX_DEV) {
    spo2Status = ValueStatus::CRITICAL;
  }
  if (maxTemp - minTemp >= TEMP_MAX_DEV) {
    tempStatus = ValueStatus::CRITICAL;
  }

  // Stablization flow
  // Stabilization flow
  if (meanTemp <= TEMP_MAX && meanTemp >= TEMP_MIN && (maxTemp - minTemp) < TEMP_MAX_DEV) {
    tempStatus = ValueStatus::STABLE;
  }
  if (meanSpO2 >= SPO2_MIN && (maxSpO2 - minSpO2) < SPO2_MAX_DEV) {
    spo2Status = ValueStatus::STABLE;
  }
  if (meanHR <= HR_MAX && meanHR >= HR_MIN && (maxHR - minHR) < HR_MAX_DEV) {
    hrStatus = ValueStatus::STABLE;
  }
}

void WiMonTerminal::wm_tick_led() {
  // Set RGB values based on the selected color
  int red = 0, green = 0, blue = 0;
  switch (wmLedColor) {
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

void WiMonTerminal::wm_on_chann_up_press() {
  channelNum++;
  wmSensorMac = 0;
  wmSensorState = UNPAIRED;
  Serial.println("Up btn pressed");
}

void WiMonTerminal::wm_on_chann_mid_press() {
  // Handle middle button press
  Serial.println("Mid btn pressed");
}

void WiMonTerminal::wm_on_chann_down_press() {
  channelNum--;
  wmSensorMac = 0;
  wmSensorState = UNPAIRED;
  Serial.println("Down btn pressed");
}

void WiMonTerminal::wm_tick_buttons() {
  bool isChannUpBtnCurrentlyPressed = digitalRead(BTN_CHAN_UP) == HIGH;

  if (isChannUpBtnPressed != isChannUpBtnCurrentlyPressed) {
    if (isChannUpBtnCurrentlyPressed) {
      upBtnLastPressedTime = millis();
      wm_on_chann_up_press();
    }
  } else if (isChannUpBtnPressed && millis() - upBtnLastPressedTime >= DEBOUNCE_MS) {
    wm_on_chann_up_press();
    upBtnLastPressedTime = millis();
  }
  isChannUpBtnPressed = isChannUpBtnCurrentlyPressed;

  // Handle Channel Down Button
  bool isChannDownCurrentlyPressed = digitalRead(BTN_CHAN_DOWN) == HIGH;

  if (isChannDownBtnPressed != isChannDownCurrentlyPressed) {
    if (isChannDownCurrentlyPressed) {
      downBtnLastPressedTime = millis();
      wm_on_chann_down_press();
    }
  } else if (isChannDownBtnPressed && millis() - downBtnLastPressedTime >= DEBOUNCE_MS) {
    wm_on_chann_down_press();
    downBtnLastPressedTime = millis();
  }
  isChannDownBtnPressed = isChannDownCurrentlyPressed;

  // Handle Middle Button
  bool isChannMidBtnCurrentlyPressed = digitalRead(BTN_MID) == HIGH;

  if (isChannMidBtnPressed != isChannMidBtnCurrentlyPressed) {
    if (isChannMidBtnCurrentlyPressed) {
      midBtnLastPressedTime = millis();
      wm_on_chann_mid_press();
    }
  } else if (isChannMidBtnPressed && millis() - midBtnLastPressedTime >= DEBOUNCE_MS) {
    wm_on_chann_mid_press();
    midBtnLastPressedTime = millis();
  }
  isChannMidBtnPressed = isChannMidBtnCurrentlyPressed;
}
