/**
  COPYRIGHT - 2025 - THE WIMON TEAM
  Contains references to code written by Rui Santos & Sara Santos - Random Nerd Tutorials
*/
#pragma once

#include <stdint.h>
#include <lvgl.h>
#include <TFT_eSPI.h>
#include <XPT2046_Touchscreen.h>
#include "config.h"

void wm_init_screen(void);
void wm_redraw_screen(void);

// void lv_touch_re ad(lv_indev_t* touchscreen, lv_indev_data_t* data);
void lv_log_cb(lv_log_level_t level, const char* buf);

