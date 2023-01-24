/**
* cpp file about break and continue: prompting even numbers only using continue
*
* it is working, after compiled with
* - Visual C++ 2022
*
* version: 09:55 24.01.2023
*/

#include<iostream>

int main()
{
	std::cout << "prompting even numbers, for loop with continue: " << std::endl;
	for(int ii=0; ii<10;ii++)
	{
		if (ii % 2 == 1) {
			continue;
		}
		std::cout << ii << std::endl;
	}
	std::cout << " \n" << std::endl;

	std::cout << "prompting even numbers, while loop with continue: " << std::endl;
	int count = 0;
	while (count < 10) {
		if (count % 2 != 0) {
			count++;
			continue;
		}
		std::cout << count << std::endl;
		count++;
	}

	return 0;
}

/**
* version: 09:55 24.01.2023
*
* End of file
*/
