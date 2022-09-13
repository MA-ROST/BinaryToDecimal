// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "math.h"
#include "userInput.h"

int main()
{
	do {
		std::string input;
		input = cinStr("Input a binary number: ");

		std::cout << toDec(input) << "\n\n";
	}
	while ( true );
}
