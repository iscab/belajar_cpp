/**
* cpp file about random numbers: a game of 10 dice with 6 sides each
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
	int diceNumber;

	// seeding the random table, so it does not always zero  
	srand(time(nullptr));

	for (int ii = 0; ii < 10; ii++)
	{
		// a dice with 6 side: with 1 to 6 dots  
		diceNumber = rand() % 6 + 1;

		std::cout << "dice " << ii << ":  " << diceNumber << std::endl;
	}

	return 0;
}

/**
* version: 10:00 26.01.2023
*
* End of file
*/
