#pragma once
#include "SimpleMath.h"
class Subtraction :
	public SimpleMath
{
public:
	Subtraction();
	~Subtraction();

	void DisplayType();
	double Solve();
	std::string Result();
};
