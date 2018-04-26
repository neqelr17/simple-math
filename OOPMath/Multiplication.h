#pragma once
#include "SimpleMath.h"
class Multiplication :
	public SimpleMath
{
public:
	Multiplication();
	~Multiplication();

	void DisplayType();
	double Solve();
	std::string Result();
};

