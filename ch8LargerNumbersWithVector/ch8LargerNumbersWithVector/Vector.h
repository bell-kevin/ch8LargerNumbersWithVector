#pragma once
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
void randomNumbers(std::vector<int>& numbers);
void displayRandomNumbers(const std::vector<int>& numbers);
int findLargest(const std::vector<int>& numbers);

// fill vector with random numbers using the push-back method
void randomNumbers(std::vector<int>& numbers)
{
	// seed the random number generator
	unsigned seed;
	seed = time(0);
	srand(seed);
	
	// fill the vector with random numbers
	for (int i = 0; i < numbers.size(); ++i)
	{
		numbers[i] = rand() % 100 + 1;
	}
} // end function randomNumbers

// display random numbers in vector square
void displayRandomNumbers(const std::vector<int>& numbers)
{
	// display the vector
	for (int i = 0; i < numbers.size(); ++i)
	{
		std::cout << numbers[i] << " ";
		if ((i + 1) % 5 == 0)
		{
			std::cout << std::endl;
		}
	}
} // end function displayRandomNumbers

// find the number of elements in vector that are larger than value
int findLargest(const std::vector<int>& numbers, int value)
{
	int count = 0;
	for (int i = 0; i < numbers.size(); ++i)
	{
		if (numbers[i] > value)
		{
			++count;
		}
	}
	std::cout << count << " of the " << numbers.size() << " numbers are larger than " << value << std::endl;
	return count;
} // end function findLargest
