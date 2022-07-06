#include "Fixed.hpp"

Fixed::Fixed() : fixedInt(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::Fixed(const int val) {
	std::cout << "Int constructor called" << std::endl;
	this->fixedInt = roundf(val * (1 << this->numBits));
}

Fixed::Fixed(const float val) {
	std::cout << "Float constructor called" << std::endl;
	this->fixedInt = roundf(val * (1 << this->numBits));
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	return (this->fixedInt);
}

void Fixed::setRawBits(const int raw) {
	this->fixedInt = raw;
}

float Fixed::toFloat(void) const {
	return ((float)this->fixedInt / (float)(1 << this->numBits));
}

int Fixed::toInt(void) const {
	return (int)this->toFloat();
}

Fixed &Fixed::operator = (const Fixed &fixed) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &fixed)
		return *this;
	this->fixedInt = fixed.getRawBits();
	return *this;
}

std::ostream& operator << (std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return out;
}
