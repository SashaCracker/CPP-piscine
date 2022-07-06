#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << "\n";
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete i;
	delete j;

	std::cout << std::endl;

	const WrongAnimal* meta1 = new WrongAnimal();
//	const WrongAnimal* j1 = new Dog();
	const WrongAnimal* i1 = new WrongCat();

//	std::cout << j1->getType() << "\n";
	std::cout << i1->getType() << " " << std::endl;
	i1->makeSound();
//	j1->makeSound();
	meta1->makeSound();

	delete meta1;
	delete i1;
//	delete j1;

	return 0;
}
