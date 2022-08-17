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
	std::string fullName;
	std::string location;
	int initialScore;

	// std::cout << "Please your score (0 to 100). " << std::endl;
	// std::cin >> initialScore;
	// std::cin.get();  // use cin.get() after cin, so that the Enter is not affecting the next line  

	std::cout << "Please input your full name.  " << std::endl;
	getline(std::cin, fullName);

	std::cout << "Please input your city, state/province, and country.  " << std::endl;
	getline(std::cin, location);

	std::cout << "Please input an integer 0 to 100. " << std::endl;
	std::cin >> initialScore;
	std::cin.get();  // use cin.get() after cin, so that the Enter is not affecting the next line  

	std::cout << "Hello, " << fullName << std::endl;
	std::cout << "We heard you are from " << location << std::endl;
	std::cout << "Your original score is " << initialScore; 
	std::cout << ", but with five points added, your score is " << (initialScore+5) << std::endl;

	return 0;
}

/**
* version: 12:42 17.08.2022
*
* End of file
*/
