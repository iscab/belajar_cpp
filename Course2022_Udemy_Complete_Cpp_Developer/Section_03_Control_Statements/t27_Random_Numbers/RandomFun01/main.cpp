/**
* cpp file about random numbers
*
* it is working, after compiled with
* - Visual C++ 2022
*
* version: 10:00 26.01.2023
*/

#include<iostream>
#include<cstdlib>
#include<ctime>

int main()
{
	srand(time(nullptr));  // seeding the random table, so it does not always zero  
	// note: there is warning C4244: 'argument': conversion from 'time_t' to 'unsigned int', possible loss of data   

	int val1 = rand() % 10;  // val1 will be >=0 and < 10  

	// shift it 
	int val2 = rand() % 10 + 1;  // val2 is >=1 and <= 10

	std::cout << time(nullptr) << std::endl;
	std::cout << val1 << std::endl;
	std::cout << val2 << std::endl;

	return 0;
}

/**
* version: 10:00 26.01.2023
*
* End of file
*/
