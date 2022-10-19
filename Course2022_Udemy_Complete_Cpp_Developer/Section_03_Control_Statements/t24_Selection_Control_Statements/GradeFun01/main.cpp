/**
* cpp file about selection control statements about switch-case
*
* it is working, after compiled with
* - Visual C++ 2022
*
* version: 09:30 19.10.2022
*/

#include<iostream>

int main()
{
	char grade;

	std::cout << "Please enter a letter grade" << std::endl;
	std::cin >> grade;

	switch(grade)
	{
	case 'A':
		std::cout << "Great job!" << std::endl;
		break;
	case 'B':
		std::cout << "Good job!" << std::endl;
		break;
	case 'C':
		std::cout << "You can do better!" << std::endl;
		break;
	case 'D':
		std::cout << "You are getting close to failing!" << std::endl;
		break;
	case 'F':
		std::cout << "You are falling the course!" << std::endl;
		break;
	default:
		std::cout << "You have entered an invalid grade.  Try again" << std::endl;

	} // end switch  

	return 0;
}

/**
* version: 09:30 19.10.2022
*
* End of file
*/
