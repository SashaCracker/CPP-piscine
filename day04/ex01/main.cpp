#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const int	array_size = 4;
	Animal		*array[array_size];

	int	i;
	for (i = 0; i < 2; ++i)
	{
		array[i] = new Dog();
		std::cout << std::endl;
	}
	for ( ; i < array_size; ++i)
	{
		array[i] = new Cat();
		std::cout << std::endl;
	}
	for (i = 0; i < array_size; ++i)
	{
		array[i]->makeSound();
		std::cout << std::endl;
	}
	for (i = 0; i < array_size; ++i)
	{
		delete array[i];
		std::cout << std::endl;
	}

	std::cout << "-------------------------------" << std::endl;

	Dog a;
	std::cout << std::endl;
	Dog b(a);
	b.setIdeas("Hi!");
	b.printIdeas();
	std::cout << std::endl;
	Cat c;
	std::cout << std::endl;
	Cat d(c);
	std::cout << std::endl;
	a = b;
	a.printIdeas();
	std::cout << std::endl;
	c = d;
	std::cout << std::endl;

	std::cout << "-------------------------------" << std::endl;

//  subject main example

	const Animal* j = new Dog();
	std::cout << std::endl;
	const Animal* k = new Cat();
	std::cout << std::endl;
	delete j;
	std::cout << std::endl;
	delete k;
	std::cout << std::endl;

	return 0;
}
