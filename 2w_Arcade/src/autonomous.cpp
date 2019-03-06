#include "main.h"
#include "autonomouses.h"
#include "lcd/lcd.h"

void autonomous() {
  Back_4p_PARK_B();
}
  /*switch (side) {
    case 1: // Blue
      side = 'B';
    case 2: // Red
      side = 'R';
  }

  switch (auton) {
    case 1: // 8-Point
      pros::lcd::initialize();
      if (side == 'B') {
        pros::lcd::print(1, "8 Point Blue");
        Eight_B();
      } else if (side == 'R') {
        pros::lcd::print(1, "8 Point Red");
        Eight_R();
      } else {
        pros::lcd::print(1, "Well crap. 8p");
      }
    case 2: // 6-Point
      pros::lcd::initialize();
      if (side == 'B') {
        pros::lcd::print(1, "6 Point Blue");
      } else if (side == 'R') {
        pros::lcd::print(1, "6 Point Red");
      } else {
        pros::lcd::print(1, "Well crap. 6p");
      }
    case 3: // 3-Point
      pros::lcd::initialize();
      if (side == 'B') {
        pros::lcd::print(1, "3 Point Blue");
      } else if (side == 'R') {
        pros::lcd::print(1, "3 Point Red");
      } else {
        pros::lcd::print(1, "Well crap. 3p");
      }
    case 4: // 1-Point
      pros::lcd::initialize();
      if (side == 'B') {
        pros::lcd::print(1, "1 Point Blue");
      } else if (side == 'R') {
        pros::lcd::print(1, "1 Point Red");
      } else {
        pros::lcd::print(1, "Well crap. 1p");
      }
    case 5: // Skills

      pros::lcd::initialize();
      if (side == 'B') {
        pros::lcd::print(1, "Skills");
      } else if (side == 'R') {
      } else {
        pros::lcd::print(1, "Well crap. Skills");
      }*/
