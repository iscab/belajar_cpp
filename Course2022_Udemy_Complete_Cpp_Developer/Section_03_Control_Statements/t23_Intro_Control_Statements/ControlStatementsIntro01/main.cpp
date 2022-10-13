/**
* cpp file about control statements
*
* it is working, after compiled with
* - Visual C++ 2022
*
* version: 08:35 13.10.2022
*/

#include<iostream>
#include<string>

int main()
{
	// sequential statements (sequence)
	int age = 15; 
	std::cout << age << std::endl;

	// selection statements (decision)
	if (age >= 16)
	{
		std::cout << "You can drive!" << std::endl;
	}
	else
	{
		std::cout << "You cannot drive yet!" << std::endl;
	}

	// repetition statements (loops)
	// for loop
	for (int ii = 1; ii <= age; ii++)
	{
		std::cout << "Happy birthday " << ii << std::endl;
	}
	
	return 0;
}

/**
* version: 08:35 13.10.2022
*
* End of file
*/
