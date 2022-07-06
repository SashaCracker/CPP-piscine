#include "Fixed.hpp"

Fixed::Fixed() : fixedInt(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedInt);
}

void Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->fixedInt = raw;
}

Fixed &Fixed::operator = (const Fixed &fixed) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &fixed)
		return *this;
	this->fixedInt = fixed.getRawBits();
	return *this;
}
