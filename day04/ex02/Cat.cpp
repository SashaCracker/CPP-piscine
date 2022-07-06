#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Default Cat constructor was called" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(const std::string &type) : Animal(type)
{
	std::cout << "Name Cat constructor was called" << std::endl;
	this->brain = new Brain();
}

Cat::Cat (const Cat& src) : Animal(src)
{
	std::cout << "Copy Cat constructor was called" << std::endl;
	if (src.brain)
		this->brain = new Brain(*src.brain);
	else
		this->brain = new Brain();
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Default Cat destructor was called" << std::endl;
}

Cat& Cat::operator=(const Cat& src)
{
	delete this->brain;
	if (src.brain)
		this->brain = new Brain(*src.brain);
	else
		this->brain = new Brain();
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow Meow" << std::endl;
}

void Cat::printIdeas() const
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

void Cat::setIdeas(std::string idea) const
{
	brain->setIdea(idea);
}