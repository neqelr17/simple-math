#include "stdafx.h"
#include "Menu.h"

#include <iostream>

Menu::Menu() : total_choices_(0)
{
}


Menu::~Menu()
{
}


//
// Get the current choice.
Menu::MenuOptions Menu::GetMenuChoice()
{
	return menu_choice_;
}


//
// Sets the menu choice if valid or returns false.
bool Menu::SetMenuChoice(int option)
{
	if (option > 0 && option <= 4 || option == 9)
	{
		menu_choice_ = static_cast<Menu::MenuOptions>(option);
		return true;
	}
	return false;
}


//
// Gets valid menu choice from the user.
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
			//system("cls");
			std::cout << "Invalid input!\n";
			std::cin.clear();
			std::cin.ignore(999, '\n');
		}
		else if (!SetMenuChoice(choice))
		{
			//system("cls");
			std::cout << "Invalid Menu Option!\n";
			std::cin.clear();
			std::cin.ignore(999, '\n');
		}
		else
		{
			is_valid = true;
			std::cin.ignore(999, '\n');
			total_choices_++;
		}
	}
}


//
// Displays the menu with a count showing solved problems. 
void Menu::DisplayMenu()
{
	if (total_choices_ > 0)
	{
		std::cout << "\nMenu:     Problems Entered: " << total_choices_ << std::endl;
	}
	else
	{
		std::cout << "\nMenu:\n";
	}
	std::cout << "------------------------------\n";
	std::cout << " 1) Addition\n";
	std::cout << " 2) Subtraction\n";
	std::cout << " 3) Multiplication\n";
	std::cout << " 4) Division\n";
	std::cout << "\n 9) Exit\n";
	std::cout << "------------------------------\n";
	std::cout << "Enter menu option: ";
}
