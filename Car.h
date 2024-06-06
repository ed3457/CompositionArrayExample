#pragma once
#include "Wheel.h"
class Car
{
private: 
	Wheel wheels[4];

public:

	void setWheel(int index, Wheel w); 

	Wheel getWheel(int index); 

	void PrintWheelInfo(); // print the info for all the wheels 

};

