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


//
// Print calculation type to console.
void Subtraction::DisplayType()
{
	std::cout << "Subtraction!\n";
}


//
// Overloaded calculation method
double Subtraction::Solve()
{
	return number1_ - number2_;
}


//
// Create the result string
std::string Subtraction::Result()
{
	std::stringstream result = std::stringstream();
	result << number1_ << " - " << number2_ << " = " << Solve();
	return result.str();
}
