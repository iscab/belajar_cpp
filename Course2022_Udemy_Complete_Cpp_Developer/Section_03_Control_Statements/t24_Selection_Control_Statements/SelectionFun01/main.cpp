/**
* cpp file about selection control statements with if, else if, and else  
*
* it is working, after compiled with
* - Visual C++ 2022
*
* version: 09:31 19.10.2022
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
	else if (age >= 16) {
		std::cout << "Here have a Coke!" << std::endl;
		std::cout << "And, at least you can drive!" << std::endl;
	}
	else {
		std::cout << "Here have a Coke!" << std::endl;
	}

	std::cout << "Thanks for coming to the Pub and Grille!" << std::endl;

	return 0;
}

/**
* version: 09:31 19.10.2022
*
* End of file
*/
