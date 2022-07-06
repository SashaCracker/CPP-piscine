#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
public:
	WrongAnimal();
	WrongAnimal(const std::string &type);
	WrongAnimal(const WrongAnimal &src);
	virtual ~WrongAnimal();

	WrongAnimal& operator=(const WrongAnimal& src);

	const std::string& getType() const;
	void makeSound() const;
protected:
	std::string _type;
};

#endif
