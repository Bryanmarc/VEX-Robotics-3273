#include "functions.h"

void EightP_RED() {
  dt_move_forward();
  pros::delay(860);
  convey();
  pros::delay(20);
  dt_stop();
  pros::delay(1300);
  convey_stop();
  pros::delay(100);
  flip_caps();
  pros::delay(75);
  convey_stop();
  pros::delay(100);
  //End of convey phase
  flywheel();
  dt_move_backwards();
  pros::delay(1020);
  dt_move_backwards(60);
  pros::delay(800);
  dt_stop();
  dt_move_forward(60);
  pros::delay(175);
  dt_stop();
  pros::delay(500);
  dt_turn_left();
  pros::delay(390);
  dt_stop();
  dt_move_forward();
  pros::delay(160);
  dt_stop();
  pros::delay(2500); //half a second less (was 3000)
  //End of aligning phase
  convey();
  pros::delay(300);
  convey_stop();
  dt_move_forward();
  pros::delay(290);
  dt_stop();
  pros::delay(500);
  convey();
  pros::delay(500);
  convey_stop();
  pros::delay(100);
  flywheel_stop();
  //end of firing phase
  pros::delay(100);
  dt_turn_left();
  pros::delay(90);
  dt_stop();
  pros::delay(100);
  convey();
  dt_move_forward();
  pros::delay(600);
  dt_stop();
  convey_stop();
  dt_move_backwards();
  pros::delay(600); //took 50 milliseconds
  dt_stop();
  pros::delay(100);
  dt_turn_right();
  pros::delay(400);
  dt_stop();
  pros::delay(100);
  flip_caps();
  dt_move_forward(100);
  pros::delay(500);
  dt_stop();
  pros::delay(300);
  dt_move_forward();
  pros::delay(300);
  convey_stop();
  dt_stop();
  pros::delay(100);
  dt_move_backwards();
  pros::delay(350);
  dt_stop();
  dt_turn_left();
  pros::delay(315);
  dt_stop();
  dt_move_forward();
  pros::delay(500);
  dt_stop();
}

void EightP_Blue() {
  dt_move_forward();
  pros::delay(900);
  convey();
  pros::delay(20);
  dt_stop();
  pros::delay(1300);
  convey_stop();
  pros::delay(100);
  flip_caps();
  pros::delay(75);
  convey_stop();
  pros::delay(100);
  //End of convey phase
  flywheel();
  dt_move_backwards();
  pros::delay(300);
  dt_turn_left(60);
  pros::delay(50);
  dt_stop();
  dt_move_backwards();
  pros::delay(720);
  dt_move_backwards(60);
  pros::delay(800);
  dt_stop();
  dt_move_forward(60);
  pros::delay(160);
  dt_stop();
  pros::delay(500);
  dt_turn_right();
  pros::delay(410);
  dt_stop();
  dt_move_forward();
  pros::delay(185);
  dt_stop();
  pros::delay(2500);
  //Aligned for the first shot
  convey();
  pros::delay(300);
  convey_stop();
  //First shot
  dt_move_forward();
  pros::delay(295);
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
  pros::delay(110);
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
  pros::delay(400);
  dt_stop();
  pros::delay(100);
  //Aligned to flip cap
  flip_caps();
  dt_move_forward(100);
  pros::delay(550);
  dt_stop();
  pros::delay(300);
  dt_move_forward();
  pros::delay(300);
  convey_stop();
  dt_stop();
  pros::delay(100);
  dt_move_backwards();
  pros::delay(300);
  //Cap has been flipped
  dt_stop();
  dt_turn_right();
  pros::delay(315);
  dt_stop();
  dt_move_forward();
  pros::delay(500);
  dt_stop();
  //Bottom flag flipper
}
