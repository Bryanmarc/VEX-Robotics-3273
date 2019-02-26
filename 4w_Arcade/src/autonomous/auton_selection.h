#include "../variables.h"

void auton_selection() {
  switch (autonomous_selection) {
    case 1:
      switch (side_selection) {
        case 1:
          1 + 1;
        case 2:
          1 + 1;
      }
    case 2:
      switch (side_selection) {
        case 1:
          1 + 1;
        case 2:
          1 + 1;
      }
    case 3:
      switch (side_selection) {
        case 1:
          1 + 1;
        case 2:
          1 + 1;
      }
    case 4:
      1 + 1;
    default:
      1 + 1;
  }
}
