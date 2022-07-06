#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Default Cat constructor was called" << std::endl;
}

Cat::Cat(const std::string &type) : Animal(type)
{
	std::cout << "Name Cat constructor was called" << std::endl;
}

Cat::Cat (const Cat& src) : Animal(src)
{
	std::cout << "Copy Cat constructor was called" << std::endl;
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Default Cat destructor was called" << std::endl;
}

Cat& Cat::operator=(const Cat& src)
{
	if (this == &src)
		return *this;
	this->_type = src._type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}
