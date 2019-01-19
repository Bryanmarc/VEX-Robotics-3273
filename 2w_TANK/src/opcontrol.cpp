#include "main.h"

void opcontrol() {
	pros::Controller master(pros::E_CONTROLLER_MASTER);
	pros::Motor left_mtr(1);
	pros::Motor right_mtr(2);
	pros::Motor conv_mtr(3);
	bool conv = false; // Button
	bool conv_rev; // Button

	while (true) {
		pros::lcd::print(0, "%d %d %d", (pros::lcd::read_buttons() & LCD_BTN_LEFT) >> 2,
		                 (pros::lcd::read_buttons() & LCD_BTN_CENTER) >> 1,
		                 (pros::lcd::read_buttons() & LCD_BTN_RIGHT) >> 0);
		// Get analog for drive train
		int left = master.get_analog(ANALOG_LEFT_Y);
		int right = master.get_analog(ANALOG_RIGHT_Y);

		// Set drive train motors
		if((ANALOG_LEFT_Y > 15) || (ANALOG_RIGHT_Y > 15)) {
			left_mtr = left;
			right_mtr = -right;
		} else {
			left_mtr = 0;
			right_mtr = 0;
		}

		// Get Buttons
		conv = master.get_digital(DIGITAL_A);
		conv_rev = master.get_digital(DIGITAL_Y);

		// Set conv
		if(conv) {
			conv_mtr = 127;
		} else if(conv_rev) {
			conv_mtr = -127;
		} else {
			conv_mtr = 0;
		}

	}
}
