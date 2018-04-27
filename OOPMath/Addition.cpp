#include "stdafx.h"
#include "Addition.h"


#include <iostream>
#include <sstream>
#include <vector>


Addition::Addition()
{
}


Addition::~Addition()
{
}


//
// Print calculation type to console.
void Addition::DisplayType()
{
	std::cout << "Addition!\n";
}


//
// Overloaded calculation method
double Addition::Solve()
{
	return number1_ + number2_;
}


//
// Create the result string
std::string Addition::Result()
{
	std::stringstream result = std::stringstream();
	result << number1_ << " + " << number2_ << " = " << Solve();
	return result.str();
}
