/**
  COPYRIGHT - 2025 - THE WIMON TEAM
  Contains references to code written by Rui Santos & Sara Santos - Random Nerd Tutorials
*/

#pragma once

#include <stdint.h>
#include <Arduino.h>

// Định nghĩa cái dữ liệu truyền đi giữa các RF, giữa terminal với server
struct WiMonPacket
{
  uint64_t MAC;
  uint8_t channel; // The channel can be changed from 0-255 to use with different WiMon terminals
  uint16_t temp_C; // temperature is stored as a fixed point real number with 3 decimal places (ie: 35000 translates to 35.000*C)
  uint8_t spo2;    // SPO2 is stored as an integer
  uint16_t hr;     // the heartrate is stored as a fixed point real number with 2 decimal place with range 0-655.36BPM  (15002 translates to 150.02BPM)
};

struct HandshakePacket
{
  bool presence;
};

struct AcknowledgementPacket
{
  uint64_t mac;
};

// This is declared for those data should be included when transfering to google sheet thru apps script end point api
struct GSDataRecord
{
  String patientID; // patient ID
  uint8_t spo2;     // SPO2 is stored as an integer
  uint16_t hr;      // the heartrate is stored as a fixed point real number with 2 decimal place with range 0-655.36BPM  (15002 translates to 150.02BPM)
  uint16_t temp_C;  // temperature is stored as a fixed point real number with 3 decimal places (ie: 35000 translates to 35.000*C)
};
