#include "stdafx.h"
#include "Multiplication.h"

#include <iostream>
#include <sstream>
#include <string>

Multiplication::Multiplication()
{
}


Multiplication::~Multiplication()
{
}


//
// Print calculation type to console.
void Multiplication::DisplayType()
{
	std::cout << "Multiplication!\n";
}


//
// Overloaded calculation method
double Multiplication::Solve()
{
	return number1_ * number2_;
}


//
// Create the result string
std::string Multiplication::Result()
{
	std::stringstream result = std::stringstream();
	result << number1_ << " x " << number2_ << " = " << Solve();
	return result.str();
}