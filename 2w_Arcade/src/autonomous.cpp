#include "main.h"
#include "autonomouses.h"
#include "lcd/lcd.h"

int side;
int auton;

void autonomous() {
/*
  switch (side) {
    case 1: // Blue
      side = 'B';
    case 2: // Red
      side = 'R';
  }


  switch (auton) {
    case 1: // 8-Point
      EightP(side);
    case 2: // 6-Point
      return;
    case 3: // 3-Point
      return;
    case 4: // 1-Point
      return;
    case 5: // Skills
      return;
  }*/
  autonomous_selection();
}
