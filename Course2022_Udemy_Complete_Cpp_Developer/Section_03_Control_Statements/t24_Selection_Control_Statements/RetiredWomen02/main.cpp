/**
* cpp file about selection control statements: exercise
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
	char gender;

	std::cout << "Please enter your age" << std::endl;
	std::cin >> age;

	std::cout << "Please enter your gender (F/f or M/m)" << std::endl;
	std::cin >> gender;

	if ((gender == 'F' || gender == 'f') && age >= 60) {
		std::cout << "You qualify for the discount!" << std::endl;
	}
	else {
		std::cout << "You do not qualify for the discount" << std::endl;
	}

	return 0;
}

/**
* version: 09:31 19.10.2022
*
* End of file
*/
