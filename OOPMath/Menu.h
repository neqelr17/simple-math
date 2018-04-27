#pragma once
class Menu
{
public:
	Menu();
	~Menu();

	enum class MenuOptions
	{
		kAddition = 1,
		kSubtraction = 2,
		kMultiplication = 3,
		kDivision = 4,
		kExit = 9
	};

	MenuOptions GetMenuChoice();
	bool SetMenuChoice(int option);
	void GetUserChoice();
	void DisplayMenu();

private:
	MenuOptions menu_choice_;
	int total_choices_;
};
