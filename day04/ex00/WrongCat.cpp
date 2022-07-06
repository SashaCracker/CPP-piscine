#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "Default WrongCat constructor was called" << std::endl;
}

WrongCat::WrongCat(std::string &type) : WrongAnimal(type)
{
	std::cout << "Name WrongCat constructor was called" << std::endl;
}

WrongCat::WrongCat (const WrongCat& src) : WrongAnimal(src)
{
	std::cout << "Copy WrongCat constructor was called" << std::endl;
	*this = src;
}

WrongCat::~WrongCat()
{
	std::cout << "Default WrongCat destructor was called" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& src)
{
	if (this == &src)
		return *this;
	this->_type = src._type;
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "La la la" << std::endl;
}
