#include "main.h"
#include "autonomous/functions.h"

void Front_Six_P_Red() {
  dt_move_forward(95);
  pros::delay(500);
  flywheel();
  pros::delay(700);
  dt_stop();
  pros::delay(100);
  dt_move_backwards(95);
  pros::delay(600);
  dt_stop();
  pros::delay(500);
  dt_turn_right(60);
  pros::delay(150);
  dt_stop();
  pros::delay(200);
  full_convey();
  pros::delay(500);
  flywheel_stop();
  full_convey_stop();
  dt_turn_right(60);
  pros::delay(120);
  dt_stop();}
