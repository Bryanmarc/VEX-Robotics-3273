#include "display/lvgl.h"
#include "lcd.h"

extern int auton;
extern int side;
// INIT LCD AKA MAIN OF LCD SELECTION
void autonomous_selection() {

  lv_theme_t * th = lv_theme_alien_init(0, NULL);

  /*Set the surent system theme*/
  lv_theme_set_current(th);

  static const char * point_select[] = {"8p", "6p", "3p", "1p", "Skills", ""};
  static const char * side_select[] = {"Blue", "Red", ""};

  lv_obj_t * btnm1 = lv_btnm_create(lv_scr_act(), NULL);
  lv_btnm_set_map(btnm1, point_select);
  lv_obj_set_size(btnm1, LV_HOR_RES, LV_VER_RES / 2);

  lv_obj_t * btnm2 = lv_btnm_create(lv_scr_act(), NULL);
  lv_btnm_set_map(btnm2, side_select);
  lv_obj_set_size(btnm2, LV_HOR_RES / 2, LV_VER_RES / 2);
  lv_obj_set_pos(btnm2, 0, (LV_VER_RES / 2) + 5);

  lv_btnm_set_toggle(btnm1, true, auton);
  lv_btnm_set_toggle(btnm2, true, side);
}
