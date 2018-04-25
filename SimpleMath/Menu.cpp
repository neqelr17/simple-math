#include "stdafx.h"
#include "Menu.h"

#include <iostream>

Menu::Menu()
{
}


Menu::~Menu()
{
}


Menu::MenuOptions Menu::GetMenuChoice()
{
	return menu_choice_;
}

bool Menu::SetMenuChoice(int option)
{
	if (option > 0 && option <= 4 || option == 9)
	{
		menu_choice_ = static_cast<Menu::MenuOptions>(option);
		return true;
	}
	return false;
}

void Menu::GetUserChoice()
{
	int choice = 0;
	bool is_valid = false;

	while (!is_valid)
	{
		DisplayMenu();

		// Get and validate input from user
		std::cin >> choice;
		if (std::cin.fail())
		{
			system("cls");
			std::cout << "Invalid input!\n";
			std::cin.clear();
			std::cin.ignore(999, '\n');
		}
		else if (!SetMenuChoice(choice))
		{
			system("cls");
			std::cout << "Invalid Menu Option!\n";
			std::cin.clear();
			std::cin.ignore(999, '\n');
		}
		else
		{
			is_valid = true;
			std::cin.ignore(999, '\n');
		}
	}
}


void Menu::DisplayMenu()
{
	std::cout << "\nMenu:\n";
	std::cout << "------------------------------\n";
	std::cout << " 1) Addition\n";
	std::cout << " 2) Subtraction\n";
	std::cout << " 3) Multiplication\n";
	std::cout << " 4) Division\n";
	std::cout << " 9) Exit\n";
	std::cout << "------------------------------\n";
	std::cout << "Enter menu option: ";
}
