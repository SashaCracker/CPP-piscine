#include "Animal.hpp"

Animal::Animal() : _type("empty")
{
	std::cout << "Default Animal constructor was called" << std::endl;
}

Animal::Animal(const std::string &type) : _type(type)
{
	std::cout << "Name Animal constructor was called" << std::endl;
}

Animal::Animal (const Animal& src)
{
	std::cout << "Copy Animal constructor was called" << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout << "Default Animal destructor was called" << std::endl;
}

const std::string& Animal::getType() const
{
	return (this->_type);
}

Animal& Animal::operator=(const Animal& src)
{
	if (this == &src)
		return *this;
	this->_type = src._type;
	return *this;
}

//void Animal::makeSound() const
//{
//	std::cout << "Here should be a sound of Animal." << std::endl;
//}


