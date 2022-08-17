/**
* cpp file to learn about symbolic constants
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
	const double MY_PI = 3.14159;

	// MY_PI = 3.1416;  // error because it is not modifiable

	int myTaxRate = 4;

	const std::string MY_NAME = "Ignatius Sapto Condro";

	// MY_NAME = "Johny";  // error
	std::cout << MY_NAME << std::endl;


	return 0;
}

/**
* version: 12:42 17.08.2022
*
* End of file
*/
