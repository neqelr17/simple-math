#include "stdafx.h"
#include "Subtraction.h"

#include <iostream>
#include <sstream>
#include <string>


Subtraction::Subtraction()
{
}


Subtraction::~Subtraction()
{
}


void Subtraction::DisplayType()
{
	std::cout << "Subtraction!\n";
}


double Subtraction::Solve()
{
	return number1_ - number2_;
}


std::string Subtraction::Result()
{
	std::stringstream result = std::stringstream();
	result << number1_ << " - " << number2_ << " = " << Solve();
	return result.str();
}
