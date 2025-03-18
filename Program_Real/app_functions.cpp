#include <cmath>
#include <iostream>


void BMICalculator()
{
	// initialize variables for input
	int feet;
	int inches;
	double height;
	double weight;
	double BMI;

	// give instructions to user for input format
	std::cout << "Enter your height in feet and inches. For example if you are 5'9 then enter 5 for the first prompt then 9 for the second prompt. \n";
	std::cout << "Feet: ";
	std::cin >> feet;
	std::cout << "\n";
	std::cout << "Inches: ";
	std::cin >> inches;
	std::cout << "\n";
	std::cout << "Please enter your weight in pounds. \n";
	std::cin >> weight;

	// calculate BMI
	weight = weight * 703;
	height = inches + (feet * 12);
	BMI = weight / (height * height);

	// display BMI
	std::cout << "Your BMI is " << BMI << ". \n";

	// display BMI category
	if (BMI < 18.5)
	{
		std::cout << "You are underweight. \n";
	}
	if (BMI >= 18.5)
	{
		if (BMI < 25)
		{
			std::cout << "Your weight is normal. \n";
		}
	}
	if (BMI >= 25)
	{
		if (BMI < 30)
		{
			std::cout << "You are overweight. \n";
		}
	}
	if (BMI > 30)
	{
		std::cout << "You are obese. \n";
	}

}