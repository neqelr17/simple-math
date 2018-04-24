#include "stdafx.h"
#include "SimpleArrayMath.h"

#include <iostream>
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
