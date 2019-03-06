#include "../globals.hpp"

void v_forward(int rpm = 200) {
  back_left_mtr.move_velocity(rpm);
  front_left_mtr.move_velocity(rpm);
  back_right_mtr.move_velocity(-rpm);
  front_right_mtr.move_velocity(-rpm);
}

void dt_move_forward(int rpm = 200) {
  back_left_mtr.move_velocity(rpm);
  front_left_mtr.move_velocity(rpm);
  back_right_mtr.move_velocity(-rpm);
  front_right_mtr.move_velocity(-rpm);
}

void dt_move_backwards(int rpm = 200) {
  back_left_mtr.move_velocity(-rpm);
  front_left_mtr.move_velocity(-rpm);
  back_right_mtr.move_velocity(rpm);
  front_right_mtr.move_velocity(rpm);
}

void dt_stop() {
  back_left_mtr = 0;
  front_left_mtr = 0;
  back_right_mtr = 0;
  front_right_mtr = 0;
}

void dt_turn_right(int rpm = 200) {
  back_left_mtr.move_velocity(rpm);
  front_left_mtr.move_velocity(rpm);
  back_right_mtr.move_velocity(rpm);
  front_right_mtr.move_velocity(rpm);
}

void dt_turn_left(int rpm = 200) {
  back_left_mtr.move_velocity(-rpm);
  front_left_mtr.move_velocity(-rpm);
  back_right_mtr.move_velocity(-rpm);
  front_right_mtr.move_velocity(-rpm);
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

void slow_flywheel() {
  flywheel_mtr_one = 80;
  flywheel_mtr_two = -80;
}
