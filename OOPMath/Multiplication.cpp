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


void Multiplication::DisplayType()
{
	std::cout << "Multiplication!\n";
}


double Multiplication::Solve()
{
	return number1_ * number2_;
}


std::string Multiplication::Result()
{
	std::stringstream result = std::stringstream();
	result << number1_ << " x " << number2_ << " = " << Solve();
	return result.str();
}