#include "../display/lvgl.h"
#include "autonomouses.h"

void autonomous_selection() {

  lvgl_init();
  static const char * btnm_map[] = {"8p", "6p", "3p", "1p", "Skills", "\n",
                           "\202Blue", "Red", ""};

  lv_obj_t * btnm1 = lv_btnm_create(lv_scr_act(), NULL);
  lv_btnm_set_map(btnm1, btnm_map);
  lv_obj_set_size(btnm1, LV_HOR_RES, LV_VER_RES / 2);

  lv_btnm_set_action(btnm_map[0], );


}
