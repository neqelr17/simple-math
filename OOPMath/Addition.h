#pragma once
#include "SimpleMath.h"
class Addition :
	public SimpleMath
{
public:
	Addition();
	~Addition();

	void DisplayType();
	double Solve();
	std::string Result();
};

