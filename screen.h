#pragma once

#define TOUCH_IRQ 17
#define TOUCH_CS 21  // Chip select pin (T_CS) of touch screen

// Common pins redeclared from TFT_eSPI lib.
#define TFT_MISO 19
#define TFT_MOSI 23
#define TFT_SCLK 18
#define TFT_CS 15
#define TFT_DC 2    // Data Command control pin
#define TFT_RST -1  // RST is connected to ESP32 EN (RST pin)


#define SCREEN_WIDTH 320
#define SCREEN_HEIGHT 480
#define FONT_SIZE 2
