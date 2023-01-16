/**
* cpp file about repetition control statements with while, do-while, and for-loop
*
* it is working, after compiled with
* - Visual C++ 2022
*
* version: 09:11 16.01.2023
*/

#include<iostream>

int main()
{
	// while-loop  
	int count = 0;  // try 0 and 10  

	std::cout << "while-loop:  " << std::endl;
	while (count < 10) {
		std::cout << count << std::endl;
		count++;
	}
	std::cout << "\n" << std::endl;

	// do-while
	int count2 = 0;  // try 0 and 10  

	std::cout << "do-while-loop:  " << std::endl;
	do {
		std::cout << count2 << std::endl;
		count2++;
	} while (count2 < 10);
	std::cout << "\n" << std::endl;

	return 0;
}

/**
* version: 09:11 16.01.2023
*
* End of file
*/
