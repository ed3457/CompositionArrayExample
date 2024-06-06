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

void Car::PrintWheelInfo()
{
	for (int i = 0; i < 4; i++)
	{
		cout << wheels[i].getDiameter() << endl;
	}

}
