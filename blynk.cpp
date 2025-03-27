#include "blynk.h"

MAX30102 sensor;

VitalSigns vitalSigns;

// init max30102 sensor
void initSensor() {
    Wire.begin();
    if (sensor.begin()) {
        Serial.println("MAX30102 is connected!");
    } else {
        Serial.println("Error: MAX30102 is not connected!");
    }
}

// read data from sensor
void readSensorData() {
    if (sensor.check()) {
        vitalSigns.heartRate = sensor.getHeartRate();
        vitalSigns.spo2 = sensor.getSpO2();
        vitalSigns.temperature = sensor.getTemperature();
    } else {
        Serial.println("Reading sensor data failed!");
    }
}

// display data on screen
void displayData() {
    lv_label_set_text_fmt(wm_bpmLabel, "%d bpm", vitalSigns.heartRate);
    lv_label_set_text_fmt(wm_spo2Label, "%d %%", vitalSigns.spo2);
    lv_label_set_text_fmt(wm_tempLabel, "%.2f °C", vitalSigns.temperature);
    lv_timer_handler();
}