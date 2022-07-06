#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat();
	Cat(const std::string &type);
	Cat(const Cat &src);
	~Cat();

	Cat& operator=(const Cat &src);

	void makeSound() const;
	void printIdeas() const;
	void setIdeas(std::string idea) const;

private:
	Brain *brain;
};

#endif
