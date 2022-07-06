#include "Array.hpp"
int	main( void )
{
	Array<int>			intArray;
	std::cout << intArray << std::endl;
	Array<int>			intArray2(5);
	for (int i = 0; i < intArray2.size(); i++)
		intArray2[i] = i;
	std::cout << intArray2 << std::endl;
	Array<std::string>	stringArray(10);
	std::cout << stringArray << std::endl;
	Array<std::string>	otherStringArray;
	stringArray[0] = "Hi";
	stringArray[1] = "Hello";
	stringArray[2] = "How are you?";
	stringArray[3] = "Fine and you?";
	stringArray[4] = "Doing great thanks!";
	stringArray[5] = "You're very welcome";
	std::cout << stringArray << std::endl;
	std::cout << "intArray.size() = " << intArray.size() << std::endl;
	std::cout << "stringArray.size() = " << stringArray.size() << std::endl;
	otherStringArray = stringArray;
	std::cout << "otherStringArray.size() = " << otherStringArray.size() << std::endl;
	otherStringArray[3] = "I'm good, how about you?";
	std::cout << otherStringArray << std::endl;
	try
	{
		std::cout << stringArray[59] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << stringArray[-3] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
