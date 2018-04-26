#pragma once
#include "SimpleMath.h"
class Division :
	public SimpleMath
{
public:
	Division();
	~Division();

	void DisplayType();
	double Solve();
	std::string Result();
	double GetNumberFromUser(std::string type);
	void SetNumbers();
};

