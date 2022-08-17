/**
* cpp file to learn about user input
*
* it is working, after compiled with
* - Visual C++ 2022
*
* version: 12:42 17.08.2022
*/

#include<iostream>
#include<string>

int main()
{
	int age;
	std::string fullName;

	std::cout << "Please enter your name " << std::endl;
	getline(std::cin, fullName);

	std::cout << "Please enter your age " << std::endl;
	std::cin >> age;

	std::cout << fullName << std::endl;
	std::cout << age << std::endl;

	return 0;
}

/**
* version: 12:42 17.08.2022
*
* End of file
*/
