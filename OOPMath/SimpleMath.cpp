#include "stdafx.h"
#include "SimpleMath.h"

#include <iostream>
#include <string>
#include <sstream>
#include <vector>


SimpleMath::SimpleMath() : number1_(0), number2_(0)
{
	
}


SimpleMath::~SimpleMath()
{
}

//
// Print calculation type to console.
void SimpleMath::DisplayType()
{
	std::cout << "SimpleArrayMath!\n";
}


//
// Get numbers to use in the calculation from the user.
// Validates input and asks for correct input if input was invalid.
double SimpleMath::GetNumberFromUser()
{
	bool keep_going = true;
	double number;
	std::string input;
	std::stringstream buffer;

	while (keep_going)
	{
		std::cout << "Please enter a number: ";
		std::getline(std::cin, input);

		buffer = std::stringstream(input);
		buffer >> number;
		if (buffer.fail())
		{
			std::cout << "Invalid input!\n";
		}
		else
		{
			keep_going = false;
		}
	}

	return number;
}


//
// Set the private numbers.
void SimpleMath::SetNumbers()
{
	number1_ = GetNumberFromUser();
	number2_ = GetNumberFromUser();
}


//
// Virutal method to be implemented in derived classes.
double SimpleMath::Solve()
{
	return 0.0;
}


//
// Virutal method to be implemented in derived classes.
std::string SimpleMath::Result()
{
	return "";
}
