#pragma once
#include <iostream>
#include <string>
using namespace std; 
class Wheel
{
private:
	float diameter;

public:

	void setDiameter(float d);
	float getDiameter();

	Wheel();
	Wheel(float d);

};

