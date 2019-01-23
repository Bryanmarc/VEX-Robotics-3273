 #include "main.h"

void opcontrol() {
	pros::Controller master(pros::E_CONTROLLER_MASTER);
	pros::Motor left_mtr(7);
	pros::Motor right_mtr(2);
	pros::Motor roller_mtr(3);
	pros::Motor flywheel_mtr(4);
	pros::Motor flywheel_mtr_2(5);

	int power;
	int strafe;
  int turn;

	bool flywheel;
  bool btn_a;
  bool conveyor_down;
	int conveyor_up;
  bool flipper_down;
	bool flipper_up;

	while (true) {
		btn_a = master.get_digital(DIGITAL_A);
		flywheel = master.get_digital(DIGITAL_DOWN);
		power = master.get_analog(ANALOG_RIGHT_Y);
    turn = master.get_analog(ANALOG_LEFT_X);
		conveyor_up = master.get_digital(DIGITAL_L1);
		conveyor_down = master.get_digital(DIGITAL_L2);
		strafe = master.get_analog(ANALOG_RIGHT_X);
    cap_knock_up = master.get_digital(DIGITAL_R1);
		// Sets motors

    if((abs(power) > 15) || (abs(strafe) > 15)) {
			left_mtr = -(power - strafe);
			right_mtr = power + strafe;
		} else {
			left_mtr = 0;
			right_mtr = 0;
		}

    if (turn > 5) {

    } else if (turn < 5) {

    } else {
      continue;
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
