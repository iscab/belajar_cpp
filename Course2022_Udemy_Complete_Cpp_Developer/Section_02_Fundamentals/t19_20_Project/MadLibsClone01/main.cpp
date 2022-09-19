/**
* cpp file about writing story using your inputs
*
* it is working, after compiled with  
* - Visual C++ 2022
*
* version: 09:20 19.09.2022
*/

#include<iostream>
#include<string>

int main()
{
	std::string adjective1, girlsName, adjective2, occupation1, placeName;
	std::string clothing, hobby;
	std::string adjective3, occupation2, boysName, mansName;
	std::string storySentence;

	adjective1 = "";
	std::cout << "Please enter an adjective" << std::endl;
	getline(std::cin, adjective1);

	girlsName = "Dora";
	std::cout << "Please enter a girl's name" << std::endl;
	getline(std::cin, girlsName);

	adjective2 = "";
	std::cout << "Please enter another adjective" << std::endl;
	getline(std::cin, adjective2);

	occupation1 = "Castradora";
	std::cout << "Please enter an occupation" << std::endl;
	getline(std::cin, occupation1);

	placeName = "Kampung Kobra";
	std::cout << "Please enter the name of a place" << std::endl;
	getline(std::cin, placeName);

	clothing = "nothing";
	std::cout << "Please enter the name of an item of clothing in plural" << std::endl;
	getline(std::cin, clothing);
	
	hobby = "castrating";
	std::cout << "Please enter a hobby" << std::endl;
	getline(std::cin, hobby);

	adjective3 = "";
	std::cout << "Please enter yet another adjective" << std::endl;
	getline(std::cin, adjective3);

	occupation2 = "smith";
	std::cout << "Please enter another occupation" << std::endl;
	getline(std::cin, occupation2);

	boysName = "Jack Lumber";
	std::cout << "Please enter a boy's name" << std::endl;
	getline(std::cin, boysName);

	mansName = "Voldemort";
	std::cout << "Please enter a man's name" << std::endl;
	getline(std::cin, mansName);

	storySentence = "There once was a " + adjective1;
	storySentence += " girl named " + girlsName;
	storySentence += ", who was a " + adjective2 + " " + occupation1;
	storySentence += " in the Kingdom of " + placeName + ". ";
	storySentence += "She loved to wear " + clothing + " and " + hobby + ". ";
	storySentence += "She wanted to marry the ";
	storySentence += adjective3 + " " + occupation2 + " named " + boysName;
	storySentence += ", but her father, King " + mansName;
	storySentence += " forbid her from seeing him. ";
	std::cout << storySentence << std::endl;

	return 0;
}

/**
* version: 09:20 19.09.2022
*
* End of file
*/
