#include "main.h"
int side_sel = 0;
int auton_sel = 0;

pros::Controller master(pros::E_CONTROLLER_MASTER);
pros::Motor back_left_mtr(21);
pros::Motor back_right_mtr(14);
pros::Motor front_left_mtr(4);
pros::Motor front_right_mtr(19);
pros::Motor flywheel_mtr_one(7);
pros::Motor flywheel_mtr_two(8);
pros::Motor index_mtr(18);
pros::Motor conveyor_mtr(15);
