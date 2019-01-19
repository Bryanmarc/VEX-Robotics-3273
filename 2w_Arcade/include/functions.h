#include "main.h"
pros::Motor dt_left(1);
pros::Motor dt_right(2);
pros::Motor conveyor(3);
pros::Motor flywheel_mtr(4);
pros::Motor flywheel_mtr_2(5);

void dt_move_forward(int power = 127) {
  dt_right = power;
  dt_left = -power;
}

void dt_move_backwards(int power = 127) {
  dt_right = -power;
  dt_left = power;
}

void dt_turn_left(int power = 127) {
  dt_left = -power;
  dt_right = -power;
}

void dt_turn_right(int power = 127) {
  dt_left = power;
  dt_right = power;
}

void dt_stop() {
  dt_left = 0;
  dt_right = 0;
}

void convey(int power = 127) {
  conveyor = power;
}

void convey_stop() {
  conveyor = 0;
}

void flywheel() {
  flywheel_mtr = 127;
  flywheel_mtr_2 = -127;
}

void flywheel_stop() {
  flywheel_mtr = 0;
  flywheel_mtr_2 = 0;
}

void flip_caps(int power = 127) {
  conveyor = -power;
}
