/**
* cpp file about selection control statements
*
* it is working, after compiled with
* - Visual C++ 2022
*
* version: 07:40 18.10.2022
*/

#include<iostream>

int main()
{
	int age;

	std::cout << "Welcome to the Pub and Grille!" << std::endl;
	std::cout << "Please enter your age" << std::endl;
	std::cin >> age;

	if (age >= 21) {
		std::cout << "Here have a beer" << std::endl;
	}

	std::cout << "Thanks for coming to the Pub and Grille!" << std::endl;

	return 0;
}

/**
* version: 07:40 18.10.2022
*
* End of file
*/
