/**
  COPYRIGHT - 2025 - THE WIMON TEAM
  Contains references to code written by Rui Santos & Sara Santos - Random Nerd Tutorials
*/

// #include <SPI.h>
// #include "screen.h"
// #include "data.h"
// #include "firebase.h"
// #include "screen.h"
// #include <lvgl.h>
// #include <stdint.h>
#include "config.h"
#include "WiMonTerminal.h"
WiMonTerminal term;

void setup()
{
  Serial.begin(115200);
  // Log current LVGL library version to SM
  term.init();
  // Initialize SPI for the touch panel and set correct orientation
}

void loop()
{
  term.tick();
}
