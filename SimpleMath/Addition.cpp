#include "stdafx.h"
#include "Addition.h"

#include <iostream>
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

void Addition::Solve()
{
	double sum = 0;
	for (auto number : inputs_)
	{
		sum += number;
	}
	std::cout << "Sum = " << sum << std::endl;
}
