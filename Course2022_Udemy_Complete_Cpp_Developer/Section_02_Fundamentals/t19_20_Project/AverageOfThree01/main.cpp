/**
* cpp file about calculating average of three variables
*
* it is working, after compiled with
* - Visual C++ 2022
*
* version: 08:15 09.09.2022
*/

#include<iostream>

int main()
{
	double num1, num2, num3, AverageNum;
	num1 = 0.0;
	num2 = 0.0;
	num3 = 0.0;

	std::cout << "Please enter a real number " << std::endl;
	std::cin >> num1;
	std::cin.get();

	std::cout << "Now, enter another real number " << std::endl;
	std::cin >> num2;
	std::cin.get();

	std::cout << "Now, enter the final real number " << std::endl;
	std::cin >> num3;
	std::cin.get();

	AverageNum = (num1 + num2 + num3) / 3.0;

	std::cout << "The average is " << AverageNum << std::endl;

	return 0;
}

/**
* version: 08:15 09.09.2022
*
* End of file
*/
