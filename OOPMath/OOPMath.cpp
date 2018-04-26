// OOPMath.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>

#include "Addition.h"
#include "Menu.h"
#include "SimpleMath.h"


int main()
{
	bool keep_going = true;
	Menu menu = Menu();
	std::vector<std::string> results = std::vector<std::string>();

	while (keep_going)
	{
		menu.GetUserChoice();
		system("cls");

		switch (menu.GetMenuChoice())
		{
		case Menu::MenuOptions::kAddition:
		{
			Addition add = Addition();
			add.DisplayType();
			add.SetNumbers();
			std::cout << add.Result() << std::endl;
			results.push_back(add.Result());
			break;
		}
		case Menu::MenuOptions::kSubtraction:
		{
			SimpleMath sub = SimpleMath();
			sub.DisplayType();
			break;
		}
		case Menu::MenuOptions::kMultiplication:
		{
			puts("Multiplication!");
			break;
		}
		case Menu::MenuOptions::kDivision:
		{
			puts("Division!");
			break;
		}
		case Menu::MenuOptions::kExit:
		{
			puts("Exiting...");
			puts("Please Come Again Soon!");
			keep_going = false;
			break;
		}
		}
	}

	std::cout << "Results:\n";
	for (auto result : results)
	{
		std::cout <<result << std::endl;
	}

	return 0;
}
