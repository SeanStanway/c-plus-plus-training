// RandomConsoleApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

int main()
{
	char functionName;
    std::cout << "Hello World!\n";

	std::cout << "Choose a function (add, multi): \n";

	std::cin >> functionName;

	if (functionName == "add")
	{
		
	}

	return EXIT_SUCCESS;
}

int addition(int x = 0, int y = 0, int z = 0)
{
	return x + y + z;
}

int multiplication(int x = 0, int y = 0)
{
	return x * y;
}
