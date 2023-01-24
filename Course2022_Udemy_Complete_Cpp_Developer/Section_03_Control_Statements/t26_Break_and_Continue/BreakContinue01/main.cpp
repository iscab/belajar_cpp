/**
* cpp file about break and continue
*
* it is working, after compiled with
* - Visual C++ 2022
*
* version: 09:51 24.01.2023 
*/

#include<iostream>

int main()
{
	int count = 0;

	// continue in a while
	std::cout << "continue in a while: " << std::endl;
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

	return 0;
}

/**
* version: 09:51 24.01.2023 
*
* End of file
*/
