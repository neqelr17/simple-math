#include "stdafx.h"
#include "SimpleArrayMath.h"

#include <iostream>
#include <string>
#include <sstream>
#include <vector>

SimpleArrayMath::SimpleArrayMath()
{
	inputs_ = std::vector<double>();
}


SimpleArrayMath::~SimpleArrayMath()
{
}

void SimpleArrayMath::DisplayType()
{
	std::cout << "SimpleArrayMath!\n";
}


void SimpleArrayMath::GetUserInputs()
{
	bool keep_going = true;
	double number;
	std::string input;
	std::stringstream buffer;

	while (keep_going)
	{
		std::cout << "Please enter a number or \"" << quit_ << "\" to quit: ";
		std::getline(std::cin, input);

		if (input == quit_)
		{
			keep_going = false;
		}
		else
		{
			buffer = std::stringstream(input);
			buffer >> number;
			if (buffer.fail())
			{
				std::cout << "Invalid input!\n";
			}
			else
			{
				inputs_.push_back(number);
			}
		}
	}
}

void SimpleArrayMath::Solve()
{
	
}
