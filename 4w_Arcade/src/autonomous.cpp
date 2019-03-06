#include "main.h"
#include "autonomous/lcd_selection.h"
#include "autonomous/autonomi.h"
#include "globals.hpp"
#include <iostream>
#include <string>

extern int auton_sel;
extern int side_sel;

void autonomous() {
  std::string text = "Auton: " + std::to_string(auton_sel);
  lv_obj_t * title = lv_label_create(lv_scr_act(), NULL);
  lv_label_set_text(title, text.c_str());

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
