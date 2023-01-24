/**
* cpp file about break and continue: prompting even numbers only using continue
*
* it is working, after compiled with
* - Visual C++ 2022
*
* version: 09:53 24.01.2023
*/

#include<iostream>

int main()
{
	std::cout << "prompting even numbers, with continue: " << std::endl;
	for(int ii=0; ii<10;ii++)
	{
		if (ii % 2 == 1) {
			continue;
		}
		std::cout << ii << std::endl;
	}
	return 0;
}

/**
* version: 09:53 24.01.2023
*
* End of file
*/
