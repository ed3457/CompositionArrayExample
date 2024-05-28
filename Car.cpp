#include "Car.h"

void Car::setWheel(int index, Wheel w)
{
	if (index >=0 && index <4)
	wheels[index] = w;
}

Wheel Car::getWheel(int index)
{   
	if (index >= 0 && index < 4)
	return wheels[index];
}
