// OOPMath.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <string>

#include "SimpleMath.h"
#include "Addition.h"
#include "Subtraction.h"
#include "Multiplication.h"
#include "Division.h"
#include "Menu.h"



int main()
{
	bool keep_going = true;
	Menu menu = Menu();
	std::vector<std::string> results = std::vector<std::string>();

	system("cls");

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
				Subtraction sub = Subtraction();
				sub.DisplayType();
				sub.SetNumbers();
				std::cout << sub.Result() << std::endl;
				results.push_back(sub.Result());
				break;
			}
			case Menu::MenuOptions::kMultiplication:
			{
				Multiplication mult = Multiplication();
				mult.DisplayType();
				mult.SetNumbers();
				std::cout << mult.Result() << std::endl;
				results.push_back(mult.Result());
				break;
			}
			case Menu::MenuOptions::kDivision:
			{
				Division div = Division();
				div.DisplayType();
				div.SetNumbers();
				std::cout << div.Result() << std::endl;
				results.push_back(div.Result());
				break;
			}
			case Menu::MenuOptions::kExit:
			{
				keep_going = false;
				std::cout << "\nResults:\n";
				for (auto result : results)
				{
					std::cout << result << std::endl;
				}
				std::cout << "\nExiting...\n";
				puts("\nPlease Come Again Soon!");
				break;
			}
		}
	}

	return 0;
}
