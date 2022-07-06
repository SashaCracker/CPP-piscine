#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("empty")
{
	std::cout << "Default WrongAnimal constructor was called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type) : _type(type)
{
	std::cout << "Name WrongAnimal constructor was called" << std::endl;
}

WrongAnimal::WrongAnimal (const WrongAnimal& src)
{
	std::cout << "Copy WrongAnimal constructor was called" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Default WrongAnimal destructor was called" << std::endl;
}

const std::string& WrongAnimal::getType() const
{
	return (this->_type);
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src)
{
	if (this == &src)
		return *this;
	this->_type = src._type;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Here should be a sound of WrongAnimal." << std::endl;
};


