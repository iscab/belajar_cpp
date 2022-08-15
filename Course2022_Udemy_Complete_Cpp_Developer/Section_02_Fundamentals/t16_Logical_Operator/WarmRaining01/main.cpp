/**
* Logical Operators:
*     &&  logical and
*     ||  logical or
*     !   not
* 
*
* it is working, after compiled with
* - Visual C++ 2022
*
* version: 08:22 15.08.2022
*/

#include<iostream>
// #include<iomanip>

int main()
{
	bool isRaining = true;  // true or false
	bool isWarm = true;  // true or false

	std::cout << std::boolalpha;
	std::cout << "And:  " << (isRaining && isWarm) << std::endl;
	std::cout << "Or:  " << (isRaining || isWarm) << std::endl;
	std::cout << "Not:  " << (!isRaining) << std::endl;

	return 0;
}

/**
* version: 08:22 15.08.2022
*
* End of file
*/
