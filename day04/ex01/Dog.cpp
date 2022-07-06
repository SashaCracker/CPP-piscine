#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Default Dog constructor was called" << std::endl;
	this->brain = new Brain();
};

Dog::Dog(std::string &type) : Animal(type)
{
	std::cout << "Name Dog destructor was called" << std::endl;
	this->brain = new Brain();
}

Dog::Dog (const Dog& src) : Animal(src)
{
	std::cout << "Copy Dog constructor was called" << std::endl;
	if (src.brain)
		this->brain = new Brain(*src.brain);
	else
		this->brain = new Brain();
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Default Dog destructor was called" << std::endl;
}

Dog& Dog::operator=(const Dog& src)
{
	delete this->brain;
	if (src.brain)
		this->brain = new Brain(*src.brain);
	else
		this->brain = new Brain();
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Bark Bark" << std::endl;
}

void Dog::printIdeas() const
{
	int c = 0;
	while (c < 100)
	{
		if (brain->getIdea(c) == "")
			break;
		std::cout << "Idia N " << std::to_string(c + 1) << " : " <<
		this->brain->getIdea(c) << std::endl;
		c++;
	}
}

void Dog::setIdeas(std::string idea) const
{
	brain->setIdea(idea);
}