#include "stdafx.h"
#include "Division.h"

#include <iostream>
#include <sstream>
#include <string>


Division::Division()
{
}


Division::~Division()
{
}


//
// Print calculation type to console.
void Division::DisplayType()
{
	std::cout << "Division!\n";
}


//
// Overloaded calculation method
double Division::Solve()
{
	return number1_ / number2_;
}


//
// Create the result string
std::string Division::Result()
{
	std::stringstream result = std::stringstream();
	result << number1_ << " / " << number2_ << " = " << Solve();
	return result.str();
}


//
// Overload of the base class to add special terms for division.
// aka Numberator and Denomiator
void Division::SetNumbers()
{
	number1_ = GetNumberFromUser("Numerator");
	number2_ = GetNumberFromUser("Denominator");
}


//
// Override of teh base class to not allow zero to be entered for the denomiator
// to prevent a divide by zero error.
double Division::GetNumberFromUser(std::string type)
{
	bool keep_going = true;
	double number;
	std::string input;
	std::stringstream buffer;

	while (keep_going)
	{
		std::cout << "Please enter the " << type << ": ";
		std::getline(std::cin, input);

		buffer = std::stringstream(input);
		buffer >> number;
		if (buffer.fail())
		{
			std::cout << "Invalid input!\n";
		}
		else if (type == "Denominator" && number == 0)
		{
			std::cout << "Cannot Divide by Zero!\n";
		}
		else
		{
			keep_going = false;
		}
	}

	return number;
}
