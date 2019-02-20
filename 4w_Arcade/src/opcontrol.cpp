#include "main.h"

/**
 * Runs the operator control code. This function will be started in its own task
 * with the default priority and stack size whenever the robot is enabled via
 * the Field Management System or the VEX Competition Switch in the operator
 * control mode.
 *
 * If no competition control is connected, this function will run immediately
 * following initialize().
 *
 * If the robot is disabled or communications is lost, the
 * operator control task will be stopped. Re-enabling the robot will restart the
 * task, not resume it from where it left off.
 */
void opcontrol() {
	pros::Controller master(pros::E_CONTROLLER_MASTER);
	pros::Motor back_left_mtr(2);
	pros::Motor back_right_mtr(12);
	pros::Motor front_left_mtr(4);
	pros::Motor front_right_mtr(11);
	pros::Motor flywheel_mtr_one(7);
	pros::Motor flywheel_mtr_two(9);
	pros::Motor index_mtr(8);
	pros::Motor conveyor_mtr(13);

	int power;
	int turn;
	bool flywheel;
	bool flywheel_backwards;
	bool conveyor_up;
	bool conveyor_down;
	bool indexer_up;
	bool indexer_down;

	while (true) {

		power = master.get_analog(ANALOG_RIGHT_Y);
		turn = master.get_analog(ANALOG_RIGHT_X);
		flywheel = master.get_digital(DIGITAL_DOWN);
		flywheel_backwards = master.get_digital(DIGITAL_UP);
		conveyor_down = master.get_digital(DIGITAL_R2);
		conveyor_up = master.get_digital(DIGITAL_R1);
		indexer_up = master.get_digital(DIGITAL_L1);
		indexer_down = master.get_digital(DIGITAL_L2);

		if (abs(power) > 15 || abs(turn) > 15){
			front_left_mtr = (power + turn);
			back_left_mtr = (power + turn);
			front_right_mtr = -(power - turn);
			back_right_mtr = -(power - turn);
		} else {
			front_left_mtr = 0;
			back_left_mtr = 0;
			front_right_mtr = 0;
			back_right_mtr = 0;
		}

		if (flywheel) {
			flywheel_mtr_one = 127;
			flywheel_mtr_two = -127;
		} else if(flywheel_backwards) {
			flywheel_mtr_one = -127;
			flywheel_mtr_two = 127;
		} else {
			flywheel_mtr_one = 0;
			flywheel_mtr_two = 0;
		}

		if (conveyor_up) {
			conveyor_mtr = 127;
		} else if(conveyor_down) {
			conveyor_mtr = -127;
		} else {
			conveyor_mtr = 0;
		}

		if (indexer_up) {
			index_mtr = 127;
		} else if (indexer_down) {
			index_mtr = -127;
		} else {
			index_mtr = 0;
		}
}
}
