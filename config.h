#pragma once
// Name: <Noun>_<Specifier>
/*
  Pins and various warning accessories
*/

#define TOUCH_IRQ -1
#define TOUCH_CS -1 // Chip select pin (T_CS) of touch screen
// Not using touch due to broken touch screen
// Screen
// Common pins redeclared from TFT_eSPI lib.
#define TFT_MISO 19
#define TFT_MOSI 23
#define TFT_SCLK 18
#define TFT_CS 17
#define TFT_DC 16  // Data Command control pin
#define TFT_RST -1 // RST is connected to ESP32 EN (RST pin)
#define SCREEN_WIDTH 320
#define SCREEN_HEIGHT 480
#define FONT_SIZE 2

// Status LED
#define LED_R 2
#define LED_G 0
#define LED_B 4

#define LED_R_Ch 0
#define LED_G_Ch 1
#define LED_B_Ch 2

// Channel Buttons
#define BTN_CHAN_UP 25
#define BTN_MID 33
#define BTN_CHAN_DOWN 26

// Alarm Buzzer
#define BUZZER 15

// RF Module
#define RF_CE 21
#define RF_CS 15

/*
  Blynk IOT Configuration
*/
#define BLYNK_TEMPLATE_ID "TMPL6Btwco48K"
#define BLYNK_TEMPLATE_NAME "WiMonTerminal"
#define BLYNK_FIRMWARE_TYPE "asdf"
#define BLYNK_FIRMWARE_VERSION        "0.1.0"

#define BLYNK_PRINT Serial
#define APP_DEBUG

#define USE_ESP32_DEV_MODULE

// define blynk virtual pins to store data to cloud
#define SPO2_VP V0
#define TEMP_VP V1
#define HR_VP V2
// define blynk virtual pins to fetch data from cloud
#define PATIENT_ID_VP V4
#define DOC_MESS_VP V5
// 
#define BLYNK_INTERVAL 10000L

// Debouncing
#define DEBOUNCE_MS 500

// Acknowledgement flow
#define ACK_TIMEOUT 1000
#define RETRIES_LIMIT

#define TEMP_MIN 36.5
#define TEMP_MAX 38.0
#define TEMP_MAX_DEV 1.5

#define HR_MIN 50.0
#define HR_MAX 110
#define HR_MAX_DEV 20

#define SPO2_MIN 90
#define SPO2_MAX 100
#define SPO2_MAX_DEV 5

#define PWM_Res 8
#define PWM_Freq 1000

#define TFT_ROTATION LV_DISPLAY_ROTATION_270

#define TERMINAL_TIMEOUT_MS 10000

/**
 * Google Sheet record and fetch data
 */
#define ENDPOINT_API_URL "https://script.google.com/macros/s/AKfycbwRju_1-TZwYdJXdi1UOXc9ZGmH4vR4lpXSgAqG9CFMkDPGmRDuGOGgR3WSXz9sPqdu/exec"

