#pragma once

#include <string>
#include <vector>

class SimpleMath
{
public:
	SimpleMath();
	~SimpleMath();

	void DisplayType();
	double GetNumberFromUser();
	void SetNumbers();
	virtual double Solve();
	virtual std::string Result();

protected:
	double number1_;
	double number2_;

private:

};

