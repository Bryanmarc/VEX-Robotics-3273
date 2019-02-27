#include "main.h"
#include "functions.h"

void Front_Six_P_Red() {
  dt_move_forward(160);
  pros::delay(1100);
  dt_stop();
  pros::delay(100);
  convey();
  pros::delay(700);
  convey_stop();
  pros::delay(100);
  dt_move_backwards(170);
  pros::delay(1100);
  dt_stop();
  flywheel();
  pros::delay(200);
  dt_turn_left(82);
  pros::delay(640);
  dt_stop();
  pros::delay(700);
  dt_move_forward(64);
  pros::delay(500);
  dt_stop();
  pros::delay(200);
  full_convey();
  pros::delay(800);
  full_convey_stop();
  dt_move_forward(130);
  pros::delay(800);
  full_convey();
  dt_stop();
  pros::delay(500);
  flywheel_stop();
  full_convey_stop();
  //convey();
  dt_turn_left(120);
  pros::delay(110);
  dt_move_forward(160);
  //pros::delay(350);
  //dt_turn_right(120);
  pros::delay(600);
  dt_move_backwards(160);
  pros::delay(400);
  dt_turn_right(120);
  pros::delay(630);
  flip_caps();
  dt_move_forward(160);
  pros::delay(150);
  dt_move_forward(100);
  pros::delay(700);
  dt_turn_left(140);
  pros::delay(240);
  dt_move_forward(160);
  pros::delay(750);
  dt_turn_left(80);
  pros::delay(280);
  dt_move_forward(120);
  pros::delay(200);
  dt_turn_left(80);
  pros::delay(300);
  dt_stop();
  full_convey_stop();
}

void v_drive_forward() {
  v_forward();
}