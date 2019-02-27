#include "display/lvgl.h"
#include "../variables.h"
/*
int side_selection = 0

int auton_sel = 0;

static lv_res_t point_btnm_action(lv_obj_t * btnm, const char *txt) {

  int btn_num = atoi(txt);


}

static lv_res_t side_btnm_action(lv_obj_t * btnm, const char *txt) {

  int btn_num = atoi(txt);


}

static void create_tab1(lv_obj_t * parent);
static void create_tab2(lv_obj_t * parent);
static void create_tab3(lv_obj_t * parent);

/**********************
 *  STATIC VARIABLES
 **********************/
static void create_tab1(lv_obj_t * parent) {

    static const char * point_select[] = {"8p", "6p", "3p", "1p", "Skills", ""};

    lv_obj_t * btnm1 = lv_btnm_create(parent, NULL);
    lv_btnm_set_map(btnm1, point_select);
    lv_obj_set_size(btnm1, LV_HOR_RES, LV_VER_RES / 2);

    int point;

    lv_btnm_set_toggle(btnm1, true, point);
}

static void create_tab2(lv_obj_t * parent) {
    static const char * side_select[] = {"Blue", "Red", ""};

    lv_obj_t * btnm2 = lv_btnm_create(parent, NULL);
    lv_btnm_set_map(btnm2, side_select);
    lv_obj_set_size(btnm2, LV_HOR_RES / 2, LV_VER_RES / 2);
    lv_obj_set_pos(btnm2, 0, (LV_VER_RES / 2) + 5);

    int side;

    lv_btnm_set_toggle(btnm2, true, side);
}

static void create_tab3(lv_obj_t * parent) {
	//lv_obj_t * auton_lbl = lv_label_create(parent, NULL);
	//lv_label_set_text(auton_lbl, strcat("Selected Autonomous: ", "\nSelected Side: "));
    //lv_obj_set_pos(auton_lbl, 0, 0);
}

void lcd_selection() {
  /*lv_init();
  lv_scr_act();
  // CONFIG THIS
  lv_theme_t * th = lv_theme_alien_init(0, NULL);
  lv_theme_set_current(th);

  static const char * point_select[] = {"8p", "6p", "3p", "1p", "Skills", ""};
  static const char * side_select[] = {"Blue", "Red", ""};

  // Try not to touch below this
  unsigned int point;
  unsigned int side;

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
  lv_btnm_set_toggle(btnm2, true, side);*/



}
