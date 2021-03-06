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
	// Variable declarations
	bool keep_going = true;
	Menu menu = Menu();
	std::vector<std::string> results = std::vector<std::string>();

	// Clear console to make it look nice.
	system("cls");

	// Loop until user quits
	while (keep_going)
	{
		// Get user menu choice
		menu.GetUserChoice();
		system("cls");

		// Choose what calculation type to use or exit.
		switch (menu.GetMenuChoice())
		{
			case Menu::MenuOptions::kAddition:
			{
				// Get numbers and perform the calculation
				Addition add = Addition();
				add.DisplayType();
				add.SetNumbers();
				std::cout << add.Result() << std::endl;
				// Add result to results vector
				results.push_back(add.Result());
				break;
			}
			case Menu::MenuOptions::kSubtraction:
			{
				// Get numbers and perform the subtraction calculation
				Subtraction sub = Subtraction();
				sub.DisplayType();
				sub.SetNumbers();
				std::cout << sub.Result() << std::endl;
				// Add result to results vector
				results.push_back(sub.Result());
				break;
			}
			case Menu::MenuOptions::kMultiplication:
			{
				// Get numbers and perform multiplication the calculation
				Multiplication mult = Multiplication();
				mult.DisplayType();
				mult.SetNumbers();
				std::cout << mult.Result() << std::endl;
				// Add result to results vector
				results.push_back(mult.Result());
				break;
			}
			case Menu::MenuOptions::kDivision:
			{
				// Get numbers and perform division the calculation
				Division div = Division();
				div.DisplayType();
				div.SetNumbers();
				std::cout << div.Result() << std::endl;
				// Add result to results vector
				results.push_back(div.Result());
				break;
			}
			case Menu::MenuOptions::kExit:
			{
				// Exit and diplay results to the console.
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
