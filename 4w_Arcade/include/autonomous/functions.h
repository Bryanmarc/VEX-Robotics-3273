#include "main.h"

pros::Motor back_left_mtr(21);
pros::Motor back_right_mtr(14);
pros::Motor front_left_mtr(4);
pros::Motor front_right_mtr(19);
pros::Motor flywheel_mtr_one(7);
pros::Motor flywheel_mtr_two(8);
pros::Motor index_mtr(18);
pros::Motor conveyor_mtr(15);

int fade_right_adjustment = 2;
int fade_left_adjustment = 0;

void dt_move_forward(int power = 127) {
  back_left_mtr = power - fade_right_adjustment;
  front_left_mtr = power - fade_right_adjustment;
  back_right_mtr = -power + fade_left_adjustment;
  front_right_mtr = -power + fade_left_adjustment;
}

void dt_move_backwards(int power = 127) {
  back_left_mtr = -power + fade_right_adjustment;
  front_left_mtr = -power + fade_right_adjustment;
  back_right_mtr = power - fade_left_adjustment;
  front_right_mtr = power - fade_left_adjustment;
}

void dt_stop() {
  back_left_mtr = 0;
  front_left_mtr = 0;
  back_right_mtr = 0;
  front_right_mtr = 0;
}

void dt_turn_right(int power = 127) {
  back_left_mtr = power;
  front_left_mtr = power;
  back_left_mtr = power;
  front_left_mtr = power;
}

void dt_turn_left(int power = 127) {
  back_left_mtr = -power;
  front_left_mtr = -power;
  back_left_mtr = -power;
  front_left_mtr = -power;
}

void convey(int power = 127) {
  conveyor_mtr = power;
}

void flip_caps(int power = 127) {
  conveyor_mtr = -power;
}

void convey_stop() {
  conveyor_mtr = 0;
}

void index_up(int power = 127) {
  index_mtr = power;
}

void index_down(int power = 127) {
  index_mtr = -power;
}

void index_stop() {
  index_mtr = 0;
}

void full_convey(int power = 127) {
  index_mtr = power;
  conveyor_mtr = power;
}

void full_convey_reverse(int power = 127) {
  index_mtr = -power;
  conveyor_mtr = -power;
}

void full_convey_stop() {
  index_mtr = 0;
  conveyor_mtr = 0;
}

void flywheel() {
  flywheel_mtr_one = 127;
  flywheel_mtr_two = -127;
}

void flywheel_backwards() {
  flywheel_mtr_one = -127;
  flywheel_mtr_two = 127;
}

void flywheel_stop() {
  flywheel_mtr_one = 0;
  flywheel_mtr_two = 0;
}
