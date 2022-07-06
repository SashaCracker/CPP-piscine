#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Default Dog destructor was called" << std::endl;
};

Dog::Dog(std::string &type) : Animal(type)
{
	std::cout << "Name Dog destructor was called" << std::endl;
}

Dog::Dog (const Dog& src) : Animal(src)
{
	std::cout << "Copy Dog constructor was called" << std::endl;
	*this = src;
}

Dog::~Dog()
{
	std::cout << "Default Dog destructor was called" << std::endl;
}

Dog& Dog::operator=(const Dog& src)
{
	if (this == &src)
		return *this;
	this->_type = src._type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Bark Bark" << std::endl;
}
