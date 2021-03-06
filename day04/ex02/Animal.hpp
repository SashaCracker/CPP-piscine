#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal {
public:
	Animal();
	Animal(const std::string &type);
	Animal(const Animal &src);
	virtual ~Animal();

	Animal& operator=(const Animal& src);

	virtual const std::string& getType() const;
	virtual void makeSound() const = 0;
protected:
	std::string _type;
};

#endif
