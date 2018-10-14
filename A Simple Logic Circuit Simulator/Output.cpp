// A Simple Logic Circuit Simulator
// A project for PHYS 30762 Programming in C++
// Author           :   Amanda Matthes (10241789)
// Handed in on     :   12.May.2018
// This program starts in Main.h

#include "Output.h"

Output::Output() {
	componentType = OUTPUT;
	state = false;
	c = off;
}
void Output::setLED(bool newState) {
	state = newState;
	if (newState == true) {
		c = on;
	}
	else {
		c = off;
	}
}