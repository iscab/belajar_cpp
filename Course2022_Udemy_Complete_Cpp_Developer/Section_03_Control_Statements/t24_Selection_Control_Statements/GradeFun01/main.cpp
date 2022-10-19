/**
* cpp file about selection control statements with switch-case
*
* it is working, after compiled with
* - Visual C++ 2022
*
* version: 09:31 19.10.2022
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
	case 'a':
		std::cout << "Great job!" << std::endl;
		break;
	case 'B':
	case 'b':
		std::cout << "Good job!" << std::endl;
		break;
	case 'C':
	case 'c':
		std::cout << "You can do better!" << std::endl;
		break;
	case 'D':
	case 'd':
		std::cout << "You are getting close to failing!" << std::endl;
		break;
	case 'F':
	case 'f':
		std::cout << "You are falling the course!" << std::endl;
		break;
	default:
		std::cout << "You have entered an invalid grade.  Try again" << std::endl;		
	} // end switch  

	return 0;
}

/**
* version: 09:31 19.10.2022
*
* End of file
*/
