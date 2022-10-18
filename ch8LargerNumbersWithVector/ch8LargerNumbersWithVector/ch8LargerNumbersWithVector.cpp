// ch8LargerNumbersWithVector.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "Vector.h"

int main()
{
    std::cout << "Ch 8 Larger Numbers with Vector by Kevin Bell\n";
	std::cout << "How many numbers do you want in this project? ";
	int num;
	std::cin >> num;
	std::vector<int> numbers(num);
	std::cout << "This program contains a vector holding " << numbers.size() << " integers between 1 and 100.\n";
	std::cout << "The vector contains the following random numbers: \n\n";
	// Push back random numbers into the vector
	randomNumbers(numbers);
	// Display the random numbers
	displayRandomNumbers(numbers);
	std::cout << "If you enter an integer in this range, the program will tell you how many of the numbers are larger than your value\n\n";
	std::cout << "Enter an integer between 1 and 100: ";
	int value;
	std::cin >> value;
	while (value < 1 || value > 100)
	{
		std::cout << "Invalid value. Enter an integer between 1 and 100: ";
		std::cin >> value;
	} // end while
	findLargest(numbers, value);
	std::cout << " " << std::endl;
	system("pause");
	return 0;
} // end main