#pragma once

#include <string>
#include <vector>

class SimpleArrayMath
{
public:
	SimpleArrayMath();
	~SimpleArrayMath();

	void DisplayType();
	void GetUserInputs();
	virtual void Solve();

protected:
	std::vector<double> inputs_;

private:
	std::string quit_ = "q";
};
