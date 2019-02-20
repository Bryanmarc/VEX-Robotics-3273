 #include "main.h"

void opcontrol() {
	pros::Controller master(pros::E_CONTROLLER_MASTER);
	pros::Motor left_mtr(8);
	pros::Motor right_mtr(2);
	pros::Motor roller_mtr(3);
	pros::Motor flywheel_mtr(4);
	pros::Motor flywheel_mtr_2(9);

	int power;
	int turn;
	int flywheel;
  bool btn_a;
	bool conveyor_up;
  bool conveyor_down;
	bool flipper_up;
	bool flipper_down;

	while (true) {
		btn_a = master.get_digital(DIGITAL_A);
		flywheel = master.get_digital(DIGITAL_DOWN);
		conveyor_up = master.get_digital(DIGITAL_L1);
		conveyor_down = master.get_digital(DIGITAL_L2);

		turn = master.get_analog(ANALOG_RIGHT_X);
    power = master.get_analog(ANALOG_RIGHT_Y);

    // Sets motors
    if((abs(power) > 15) || (abs(turn) > 15)) {
			left_mtr = -(power - turn);
			right_mtr = power + turn;
		} else {
			left_mtr = 0;
			right_mtr = 0;
		}

		if(flywheel) {
			flywheel_mtr = 127;
			flywheel_mtr_2 = -127;
		} else {
			flywheel_mtr = 0;
			flywheel_mtr_2 = 0;
		}

		if(conveyor_up) {
			roller_mtr = 127;
		} else if (conveyor_down) {
			roller_mtr = -127;
		} else {
			roller_mtr = 0;
		}

  }
}
