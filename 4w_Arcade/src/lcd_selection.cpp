#include "main.h"
#include "globals.hpp"
#include "autonomous/lcd_selection.h"
#include "display/lvgl.h"
#include <stdlib.h>

extern int auton_sel;
extern int side_sel;

static lv_res_t point_btnm_action(lv_obj_t * btnm, const char *txt) {

  if( txt == "Front") {auton_sel = 1;}
  else if( txt == "Back") {auton_sel = 2;}
  else if( txt == "Skills") { auton_sel = 3;}

  std::string text = "Auton: " + std::to_string(auton_sel);
  lv_obj_t * title = lv_label_create(lv_scr_act(), NULL);
  lv_label_set_text(title, txt);
  return LV_RES_OK;
}

static lv_res_t side_btnm_action(lv_obj_t * btnm, const char *txt) {
  if( txt == "Blue") {side_sel = 1;}
  else if( txt == "Red") {side_sel = 2;}

  side_sel = atoi(txt);
  std::string text = "Side: " + std::to_string(side_sel);
  lv_obj_t * title = lv_label_create(lv_scr_act(), NULL);
  lv_label_set_text(title, txt);
  return LV_RES_OK;
}
/*
static lv_res_t tab_refresh(lv_obj_t * tabview) {
  lv_ref(tabview);
}
*/
static void create_tab1(lv_obj_t * parent) {

    static const char * point_select[] = {"Front", "Back", "Skills", ""};

    lv_obj_t * btnm1 = lv_btnm_create(parent, NULL);
    lv_btnm_set_map(btnm1, point_select);
    lv_obj_set_size(btnm1, LV_HOR_RES, LV_VER_RES / 2);

    int point;

    lv_btnm_set_toggle(btnm1, true, point);
    lv_btnm_set_action(btnm1, point_btnm_action);
}

static void create_tab2(lv_obj_t * parent) {

    static const char * side_select[] = {"Blue", "Red", ""};

    lv_obj_t * btnm2 = lv_btnm_create(parent, NULL);
    lv_btnm_set_map(btnm2, side_select);
    lv_obj_set_size(btnm2, LV_HOR_RES / 2, LV_VER_RES / 2);
    lv_obj_set_pos(btnm2, 0, (LV_VER_RES / 2) + 5);

    int side;

    lv_btnm_set_toggle(btnm2, true, side);
    lv_btnm_set_action(btnm2, side_btnm_action);
}

static void create_tab3(lv_obj_t * parent) {
    std::string auton_text = "Auton: " + std::to_string(auton_sel);
    lv_obj_t * auton_lbl = lv_label_create(parent, NULL);
    lv_label_set_text(auton_lbl, auton_text.c_str());

    std::string side_text = "Side: " + std::to_string(auton_sel);
    lv_obj_t * side_lbl = lv_label_create(parent, NULL);
    lv_label_set_text(side_lbl, side_text.c_str());
}

/*void auton_selection() {

  switch (autonomous_selection) {
    case 1:
      switch (side_selection) {
        case 1:
          1 + 1;
        case 2:
          1 + 1;
      }
    case 2:
      switch (side_selection) {
        case 1:
          1 + 1;
        case 2:
          1 + 1;
      }
    case 3:
      switch (side_selection) {
        case 1:
          1 + 1;
        case 2:
          1 + 1;
      }
    case 4:
      1 + 1;
    default:
      1 + 1;
  }
}
*/
void lcd_selection() {
  // CONFIG THIS
  //lv_theme_t * th = lv_theme_alien_init(0, NULL);
  //lv_theme_set_current(th);

  /*static const char * point_select[] = {"8p", "6p", "3p", "1p", "Skills", ""};
  static const char * side_select[] = {"Blue", "Red", ""};

  // Try not to touch below this
  int point;
  int side;

  lv_obj_t * btnm1 = lv_btnm_create(lv_scr_act(), NULL);
  lv_btnm_set_map(btnm1, point_select);
  //lv_btnm_set_action(btnm1, auton_selection_act);
  lv_obj_set_size(btnm1, LV_HOR_RES, LV_VER_RES / 2);
  lv_btnm_set_toggle(btnm1, true, point);

  lv_obj_t * btnm2 = lv_btnm_create(lv_scr_act(), NULL);
  lv_btnm_set_map(btnm2, side_select);
  //lv_btnm_set_action(btnm2, side_selection_act);
  lv_obj_set_size(btnm2, LV_HOR_RES / 2, LV_VER_RES / 2);
  lv_obj_set_pos(btnm2, 0, (LV_VER_RES / 2) + 5);
  lv_btnm_set_toggle(btnm2, true, side);
  */
  lv_obj_t * tv = lv_tabview_create(lv_scr_act(), NULL);
  lv_obj_set_size(tv, LV_HOR_RES, LV_VER_RES);

  lv_obj_t * tab1 = lv_tabview_add_tab(tv, "Autonomous");
  lv_obj_t * tab2 = lv_tabview_add_tab(tv, "Side Select");
  lv_obj_t * tab3 = lv_tabview_add_tab(tv, "Diagnostics");

  create_tab1(tab1);
  create_tab2(tab2);
  create_tab3(tab3);

  //lv_tabview_set_tab_load_action(tab3, tab_refresh);

}
