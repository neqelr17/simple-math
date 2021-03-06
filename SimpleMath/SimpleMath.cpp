// SimpleMath.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

#include "Menu.h"
#include "SimpleArrayMath.h"
#include "Addition.h"


int main()
{
	bool keep_going = true;
	Menu menu = Menu();

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
				add.GetUserInputs();
				add.Solve();
				break;
			}
			case Menu::MenuOptions::kSubtraction:
			{
				SimpleArrayMath sub = SimpleArrayMath();
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

    return 0;
}
