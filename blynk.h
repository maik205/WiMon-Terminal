#ifndef BLYNK_H
#define BLYNK_H

#include <Arduino.h>
#include <Wire.h>
#include <TFT_eSPI.h>
#include "lvgl.h"
#include "screen.h"
#include "ui.h"
#include "MAX30102.h"

// data structure for vital signs
struct VitalSigns {
    int heartRate;
    int spo2;
    float temperature;
};

extern VitalSigns vitalSigns;

void initSensor();
void readSensorData();
void displayData();

#endif
