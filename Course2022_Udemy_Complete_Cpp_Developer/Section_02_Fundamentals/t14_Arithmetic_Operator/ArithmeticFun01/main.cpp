/**
* Arithmetic Operators:  
*     +  addition operator  
*     -  substraction operator  
*     *  multiplication operator  
*     /  division operator  
*     %  modulus operator  
* 
* 
* it is working, after compiled with
* - Visual C++ 2022
*
* version: 08:22 15.08.2022
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

	int result = 10;
	int myInt = 5;

	result += 17;  // result = result + 17;

	std::cout << "Sum =  " << sum << std::endl;
	std::cout << "Difference =  " << difference << std::endl;
	std::cout << "Product =  " << product << std::endl;
	std::cout << "Quotient =  " << quotient << std::endl;
	std::cout << "Remainder =  " << remainder << std::endl;

	std::cout << "Result =  " << result << std::endl;

	std::cout << myInt << std::endl;
	myInt++;  // ++myInt;    myInt += 1;    myInt = myInt + 1;  
	std::cout << myInt << std::endl;
	myInt--;  // --myInt;
	std::cout << myInt << std::endl;

	return 0;
}

/**
* version: 08:22 15.08.2022
*
* End of file
*/
