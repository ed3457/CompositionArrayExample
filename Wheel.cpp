#include "Wheel.h"

void Wheel::setDiameter(float d)
{
	diameter = d;
}

float Wheel::getDiameter()
{
	return diameter;
}

Wheel::Wheel():Wheel(14)
{ // default is 14 inches 
}

Wheel::Wheel(float d)
{
	setDiameter(d);
}
