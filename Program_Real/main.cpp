#include <iostream>
#include "app_functions.h"

int main()
{
	// initialize variable to collect user input
	int input;

	// output instructions for user then list available functionalities
	std::cout << "Please enter the number next to the functinality you would like to use. \n ";
	std::cout << "1 - BMI Calculator. \n";

	// check if user input is valid
	int validcheck = 1;

	while (validcheck == 1)
	{
		// catches non integar input
		if (!(std::cin >> input))
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid input. Please enter a number from the list of functionalities. \n";
		}

		// select functionality based on input
		if (input == 1)
		{
			BMICalculator();
			validcheck = 0;
		}

		// catches integar that doesn't appear on list of functionality
		else
		{
			std::cout << "Invalid input. Please enter a number from the list of functionalities. \n";
		}

	}

	std::cout << "Thank you for using the application. \n";

	return 0;
}