#include "main.h"
#include "autonomous/lcd_selection.h"

extern int auton_sel;
extern int side_sel;

void initialize() {
}

void disabled() {

}

void competition_initialize() {
	lcd_selection();
}
