#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Constructor of Brain was called" << std::endl;
}

Brain::Brain(const Brain& copy)
{
	int c = 0;
	while (c < 100)
	{
		this->ideas[c] = copy.ideas[c];
		c++;
	}
	std::cout << "Copy Constructor of Brain was called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Default Destructor of Brain class was called" << std::endl;
};

Brain& Brain::operator=(const Brain& copy)
{
	int c = 0;
	while (c < 100)
	{
		this->ideas[c] = copy.ideas[c];
		c++;
	}
	return (*this);
}

void Brain::setIdea(std::string idea)
{
	int c = 0;
	while (c < 100)
	{
		if (!(this->ideas[c][0]))
		{
			this->ideas[c] = idea;
			break;
		}
		else
			c++;
	}
}

std::string Brain::getIdea(int c) const
{
	return this->ideas[c];
}
