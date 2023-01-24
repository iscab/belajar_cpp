/**
* cpp file about break and continue
*
* it is working, after compiled with
* - Visual C++ 2022
*
* version: 09:53 24.01.2023 
*/

#include<iostream>

int main()
{
	int count = 0;

	// continue in a while loop
	std::cout << "continue in a while-loop: " << std::endl;
	while (count < 10)
	{
		if (count == 5) {
			count++;
			continue;
		}
		std::cout << count << std::endl;
		count++;
	}
	std::cout << " \n" << std::endl;

	// for loop with continue
	std::cout << "for loop with continue: " << std::endl;
	for (int ii = 0; ii < 10; ii++)
	{
		if (ii == 5) {
			continue;
		}
		std::cout << ii << std::endl;
	}
	std::cout << " \n" << std::endl;

	// for loop with break
	std::cout << "for loop with break: " << std::endl;
	for (int ii = 0; ii < 10; ii++)
	{
		if (ii == 5) {
			break;
		}
		std::cout << ii << std::endl;
	}
	std::cout << " \n" << std::endl;

	return 0;
}

/**
* version: 09:53 24.01.2023 
*
* End of file
*/
