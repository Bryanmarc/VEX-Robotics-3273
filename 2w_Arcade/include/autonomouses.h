#include "functions.h"

void Eight_R() {
    dt_move_forward(80);
    pros::delay(210);
    dt_move_forward();
    pros::delay(600);
    dt_move_forward(80);
    pros::delay(520);
    convey();
    pros::delay(20);
    dt_stop();
    pros::delay(1300);/*
    convey_stop();
    pros::delay(100);*/
    flip_caps();
    pros::delay(100);
    convey_stop();
    pros::delay(100);
    //End of convey phase
    flywheel();
    dt_move_backwards();
    pros::delay(350);
    dt_stop();
    dt_move_backwards();
    pros::delay(1070); // 1170
    dt_stop();
    pros::delay(100);
    dt_move_forward(60);
    pros::delay(170);
    dt_stop();
    pros::delay(500);
    dt_turn_left(80);
    pros::delay(515);
    dt_stop();
    pros::delay(100);
    dt_move_forward();
    pros::delay(220);
    dt_stop();
    pros::delay(2500);
    //Aligned for the first shot
    convey();
    pros::delay(200);
    convey_stop();
    //First shot
    dt_move_forward();
    pros::delay(230);
    dt_stop();
    pros::delay(700);
    //Aligned for second shot
    convey();
    pros::delay(500);
    convey_stop();
    pros::delay(100);
    flywheel_stop();
    //Second shot/end of firing phase
    pros::delay(100);
    dt_turn_left();
    pros::delay(120);
    dt_stop();
    pros::delay(100);
    convey();
    dt_move_forward();
    pros::delay(550);
    dt_stop();
    convey_stop();
    //Bottom flag is flipped
    dt_move_backwards();
    pros::delay(515); //took 50 milliseconds
    dt_stop();
    pros::delay(100);
    dt_turn_right();
    pros::delay(430);
    dt_stop();
    pros::delay(100);
    //Aligned to flip cap
    flip_caps();
    dt_move_forward(100);
    pros::delay(550);
    dt_stop();
    pros::delay(300);
    dt_move_forward();
    pros::delay(200);
    convey_stop();
    dt_stop();
    pros::delay(100);
    dt_move_backwards();
    pros::delay(300);
    //Cap has been flipped
    dt_stop();
}

void Eight_B() {
  dt_move_forward(80);
  pros::delay(210);
  dt_move_forward();
  pros::delay(600);
  dt_move_forward(80);
  pros::delay(520);
  convey();
pros::delay(20);
dt_stop();
pros::delay(1300);/*
convey_stop();
pros::delay(100);*/
flip_caps();
pros::delay(100);
convey_stop();
pros::delay(100);
//End of convey phase
flywheel();
dt_move_backwards();
pros::delay(350);
dt_stop();
dt_move_backwards();
pros::delay(1070); // 1170
dt_stop();
pros::delay(100);
dt_move_forward(60);
pros::delay(170);
dt_stop();
pros::delay(500);
dt_turn_right(80);
pros::delay(560);
dt_stop();
pros::delay(100);
dt_move_forward();
pros::delay(220);
dt_stop();
pros::delay(2500);
//Aligned for the first shot
convey();
pros::delay(200);
convey_stop();
//First shot
dt_move_forward();
pros::delay(230);
dt_stop();
pros::delay(700);
//Aligned for second shot
convey();
pros::delay(500);
convey_stop();
pros::delay(100);
flywheel_stop();
//Second shot/end of firing phase
pros::delay(100);
dt_turn_right();
pros::delay(120);
dt_stop();
pros::delay(100);
convey();
dt_move_forward();
pros::delay(550);
dt_stop();
convey_stop();
//Bottom flag is flipped
dt_move_backwards();
pros::delay(515); //took 50 milliseconds
dt_stop();
pros::delay(100);
dt_turn_left();
pros::delay(430);
dt_stop();
pros::delay(100);
//Aligned to flip cap
flip_caps();
dt_move_forward(100);
pros::delay(550);
dt_stop();
pros::delay(300);
dt_move_forward();
pros::delay(200);
convey_stop();
dt_stop();
pros::delay(100);
dt_move_backwards();
pros::delay(300);
//Cap has been flipped
dt_stop();
}

void Ram() {
  dt_move_forward();
  pros::delay(3000);
  dt_stop();
  pros::lcd::initialize();
  pros::lcd::print(1, "We made it!");
}

void Back_4p_PARK_R() {
      dt_move_forward(80);
      pros::delay(200);
      dt_move_forward();
      pros::delay(600);
      dt_move_forward(80);
      pros::delay(500);
      convey();
      pros::delay(20);
      dt_stop();
      pros::delay(1100);
      flip_caps();
      pros::delay(100);
      convey_stop();
      flywheel();
      dt_move_backwards();
      pros::delay(800);
      dt_stop();
      pros::delay(300);
      dt_turn_left(80);
      pros::delay(278);
      dt_stop();
      pros::delay(100);
      dt_move_backwards(80);
      pros::delay(200);
      dt_stop();
      pros::delay(4100);
      convey();
      pros::delay(100);
      convey_stop();
      pros::delay(100);
      flywheel_stop();
      /*
      dt_turn_left();
      pros::delay(430);
      dt_move_forward();
      pros::delay(200);
      dt_move_backwards();
      pros::delay(1300);
      dt_stop();
      pros::delay(200);
      dt_move_forward();
      pros::delay(2800);
      dt_stop();*/

      /*dt_turn_left();
      pros::delay(140);
      dt_move_forward();
      */
}

void Back_4p_PARK_B() {
  dt_move_forward(80);
  pros::delay(200);
  dt_move_forward();
  pros::delay(600);
  dt_move_forward(80);
  pros::delay(500);
  convey();
  pros::delay(20);
  dt_stop();
  pros::delay(1100);
  flip_caps();
  pros::delay(100);
  convey_stop();
  flywheel();
  dt_move_backwards();
  pros::delay(800);
  dt_stop();
  pros::delay(300);
  dt_turn_right(80);
  pros::delay(278);
  dt_stop();
  pros::delay(100);
  dt_move_backwards(80);
  pros::delay(200);
  dt_stop();
  pros::delay(4100);
  convey();
  pros::delay(1200);
  convey_stop();
  pros::delay(100);
  flywheel_stop();
}
