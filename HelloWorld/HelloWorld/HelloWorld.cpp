// HelloWorld.cpp : Defines the entry point for the console application.
// Written by Kevin Brunelle

// This is a simple "Hello World" console app to provide a file that will be committed to
// the GitHub project.

#include "stdafx.h"
#include <cstdlib>
#include <string>
#include <iostream>


int main()
{
	//create the message to put to the console
	std::string message = "Hello World!";
	std::cout << message << std::endl;
	//pause the app
	system("pause");

    return 0;
}

