/**
* Arithmetic Operators:  
*   +  addition operator  
*   -  substraction operator  
*   *  multiplication operator  
*   /  division operator  
*   %  modulus operator  
* 
* 
* it is working, after compiled with
* - Visual C++ 2022
*
* version: 08:21 15.08.2022
*/

#include<iostream>

int main()
{
	int a = 10;
	int b = 3;
	int sum = a + b;
	int difference = a - b;
	int product = a * b;
	int quotient = a / b;
	int remainder = a % b;

	std::cout << "Sum =  " << sum << std::endl;
	std::cout << "Difference =  " << difference << std::endl;
	std::cout << "Product =  " << product << std::endl;
	std::cout << "Quotient =  " << quotient << std::endl;
	std::cout << "Remainder =  " << remainder << std::endl;

	return 0;
}

/**
* version: 08:21 15.08.2022
*
* End of file
*/
