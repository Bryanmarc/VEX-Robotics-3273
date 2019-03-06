#include "main.h"

void opcontrol() {
	pros::Controller master(pros::E_CONTROLLER_MASTER);
	pros::Motor back_left_mtr(21);
	pros::Motor back_right_mtr(14);
	pros::Motor front_left_mtr(4);
	pros::Motor front_right_mtr(19);
	pros::Motor flywheel_mtr_one(7);
	pros::Motor flywheel_mtr_two(8);
	pros::Motor index_mtr(18);
	pros::Motor conveyor_mtr(15);
  // Sorry the ports are disorganized. This was to fix the static discharging.

	int power;
	int turn;
	bool flywheel;
	bool flywheel_backwards;
	bool conveyor_up;
	bool conveyor_down;
	bool indexer_up;
	bool indexer_down;

	LV_IMG_DECLARE(bbb);
	lv_obj_t * bbb_obj = lv_img_create(lv_scr_act(), NULL);
	lv_img_set_src(bbb_obj, &bbb);
	lv_obj_set_pos(bbb_obj, 10, 10);

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

			/*	front_left_mtr.move_velocity((400/127)*(power + turn));
				back_left_mtr.move_velocity((400/127)*(power + turn));
				front_right_mtr.move_velocity((400/127)*(-(power - turn)));
				back_right_mtr.move_velocity((400/127)*(-(power - turn)));
			*/
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
