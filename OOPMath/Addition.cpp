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

void Addition::DisplayType()
{
	std::cout << "Addition!\n";
}

double Addition::Solve()
{
	return number1_ + number2_;
}

std::string Addition::Result()
{
	std::stringstream result = std::stringstream();
	result << number1_ << " + " << number2_ << " = " << Solve();
	return result.str();
}
