#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
# define Z_num 2

class Zombie {
public:
	void announce(void);
	void setName(std::string name);
	Zombie();
	~Zombie();
private:
	std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
