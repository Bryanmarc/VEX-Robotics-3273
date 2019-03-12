#include "autonomous/lcd_selection.h"
#include "autonomous/autonomi.h"
#include "globals.hpp"
#include <iostream>
#include <string>

extern int auton_sel;
extern int side_sel;

void autonomous() {
  std::string a_text = "Auton: " + std::to_string(auton_sel);
  lv_obj_t * a_title = lv_label_create(lv_scr_act(), NULL);
  lv_label_set_text(a_title, a_text.c_str());

  std::string s_text = "Side: " + std::to_string(side_sel);
  lv_obj_t * s_title = lv_label_create(lv_scr_act(), NULL);
  lv_label_set_text(s_title, s_text.c_str());
  lv_obj_set_pos(s_title, 0, lv_obj_get_y(a_title) + 10);

  if(auton_sel == 1) {
    if(side_sel == 1) {
      Front_Eight_P_Blue();
    }
    else if(side_sel == 2) {
      Front_Eight_P_Red();
    }
    else if(side_sel == 0) {
      Front_Eight_P_Blue();
    }
  }
  else if(auton_sel == 2) {
    if(side_sel == 1) {
      1 + 1;
      //Back_Eight_P_Blue();
    }
    else if(side_sel == 2) {
      Back_Eight_P_Red();
    }
    else if(side_sel == 0) {
      1 + 1;
      // Back_Eight_P_Blue();
    }
  }
  else if(auton_sel == 3) {
    Skills();
  }
  else if(auton_sel == 0) {
    if(side_sel == 1) {
      Front_Eight_P_Blue();
    }
    else if(side_sel == 2) {
      Front_Eight_P_Red();
    }
    else if (side_sel == 0) {
      Front_Eight_P_Blue();
    }
  }
}
