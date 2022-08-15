/**
* Relational Operators:
*     >   greater than
*     >=  greater than or equal to
*     <   less than  
*     <=  less than or equal to  
*     ==  equal-to (equality)  
*     !=  not-equal-to (equality)
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
	int a = 15;
	int b = 20;
	bool areEqual = a == b;

	int age = 16; // 42;

	std::cout << std::boolalpha;
	std::cout << (a < b) << std::endl;
	
	std::cout << areEqual << std::endl;

	std::cout << "Age " << age << " >= 21?  " << (age >= 21) << std::endl;


	return 0;
}

/**
* version: 08:22 15.08.2022
*
* End of file
*/
