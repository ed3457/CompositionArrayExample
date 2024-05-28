#pragma once
#include "Wheel.h"
class Car
{
private: 
	Wheel wheels[4];

public:

	void setWheel(int index, Wheel w); 

	Wheel getWheel(int index); 

};

