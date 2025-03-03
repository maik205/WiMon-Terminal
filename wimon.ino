/**
  COPYRIGHT - 2025 - THE WIMON TEAM
  Contains references to code written by Rui Santos & Sara Santos - Random Nerd Tutorials
*/
#include <lvgl.h>
#include <TFT_eSPI.h>
#include <XPT2046_Touchscreen.h>
#include <SPI.h>
//TODO: get actual pin out for TFT and Touch Controller
// Touch panel specific pin

SPIClass spi(VSPI);
XPT2046_Touchscreen touch(TOUCH_CS, TOUCH_IRQ);

int t_x, t_y, t_pres;

lv_display_t* tft;


void print_log(lv_log_level_t level, const char* buf) {
  LV_UNUSED(level);
  Serial.println(buf);
  Serial.flush();
}

void touch_read(lv_indev_t* touchscreen, lv_indev_data_t* data) {
  if (touch.tirqTouched() && touch.touched()) {
    TS_Point p = touch.getPoint();
    t_x = map(p.x, 200, 3700, 1, SCREEN_WIDTH);
    // the Y coordinate is reversed due to quirk with RPi disp
    t_y = map(3800 - p.y, 240, 3800, 1, SCREEN_HEIGHT);
    t_pres = p.z;

    data->point.x = t_x;
    data->point.y = t_y;
    data->state = LV_INDEV_STATE_PRESSED;

  }
  else {
    data->state = LV_INDEV_STATE_RELEASED;
  }
}

void setup() {

  //Log current LVGL library version to SM
  String LVGL_Arduino = String("LVGL Library Version: ") + lv_version_major() + "." + lv_version_minor() + "." + lv_version_patch();
  Serial.begin(115200);
  Serial.println(LVGL_Arduino);

  // Initialize SPI for the touch panel and set correct orientation
  spi.begin(TFT_SCLK, TFT_MISO, TFT_MOSI, TOUCH_CS);
  touch.begin(spi);
  touch.setRotation(1);

  // Initialize lvgl
  lv_init();
  lv_log_register_print_cb(print_log);
  tft = lv_tft_espi_create(SCREEN_WIDTH, SCREEN_HEIGHT, draw_buf);
}

void loop() {
  // put your main code here, to run repeatedly:
}
