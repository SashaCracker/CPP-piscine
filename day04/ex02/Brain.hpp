#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {
public:
	Brain();
	Brain(const Brain& copy);
	~Brain();

	Brain& operator=(const Brain& copy);

	void setIdea(std::string idea);
	std::string getIdea(int c) const;
private:
	std::string ideas[100];
};

#endif
