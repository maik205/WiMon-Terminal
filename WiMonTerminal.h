#pragma once
#include <stdint.h>

#include "structs.h"
#include "enums.h"
#include "config.h"
#include <RF24.h>
#include "screen.h"
#include <cppQueue.h>
#include "ui.h"

class WiMonTerminal
{
private:
    SensorConnectionState wmSensorState;
    TerminalStatus wmTerminalStatus;
    StatusLEDColor wmLedColor;

    uint64_t wmSensorMac;
    uint32_t wmAliveTimeS;
    uint16_t lastTickMs;

    uint8_t channelNum;

    

    cppQueue packetHistory;
    uint16_t lastRecievedPacket;

    uint8_t dutyCycle;
    uint8_t currentDuty;
    bool increasing;
    uint8_t radioAddresses[2][6] = {"SENSR", "TERMI"};
    uint32_t lastSentRequest;
    uint8_t numOfTries;

    bool isChannUpBtnPressed;
    int upBtnLastPressedTime;

    bool isChannDownBtnPressed;
    int downBtnLastPressedTime;

    bool isChannMidBtnPressed;
    int midBtnLastPressedTime;

    ValueStatus spo2Status;
    ValueStatus tempStatus;
    ValueStatus hrStatus;

    void wm_init_pins();
    void wm_init_radio();
    void wm_init_screens();
    void wm_ping_sensor();
    void wm_tick_led();
    void wm_tick_data();
    void wm_check_data();
    void wm_on_chann_up_press();
    void wm_on_chann_mid_press();
    void wm_on_chann_down_press();
    void wm_tick_buttons();

    // Google Sheet & Apps script
    // void gs_fetch_patient_name(); // fetch data of patient name from google sheet by his/her ID
    // void gs_post_vital_record(); // this post the GDDataRecord to google sheet

    

public:
    WiMonTerminal();
    void tick();
    void init();

    // those below used to set value for docMess and patientID + record vitals + write patient's vitals to cloud (should be public static)
    static String docMess;
    static String patientID;
    static uint8_t spo2;
    static uint16_t hr;
    static uint16_t temp_C;
    static void bl_write_data();
};