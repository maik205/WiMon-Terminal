// /**
//   COPYRIGHT - 2025 - THE WIMON TEAM
//   Contains references to code written by Rui Santos & Sara Santos - Random Nerd Tutorials
// */

#include "screen.h"
#include "ui.h"

lv_display_t *lv_screen;
#define DRAW_BUF_SZ (SCREEN_WIDTH * SCREEN_HEIGHT) / 10
uint8_t draw_buf[DRAW_BUF_SZ * (LV_COLOR_DEPTH) / 8];
// // Info
String LV_VERSION_STRING = String("LVGL Library Version: ") + lv_version_major() + "." + lv_version_minor() + "." + lv_version_patch();

void lv_log_cb(lv_log_level_t level, const char *buf)
{
  Serial.println(buf);
  Serial.flush();
}

void wm_init_screen(void)
{
  lv_init();
  Serial.println(LV_VERSION_STRING);

  lv_log_register_print_cb(lv_log_cb);
  // Initialize lvgl
  lv_screen = lv_tft_espi_create(SCREEN_WIDTH, SCREEN_HEIGHT, draw_buf, DRAW_BUF_SZ);

  ui_init();
}

void wm_redraw_screen()
{
  lv_timer_handler();
  lv_tick_inc(1);
}