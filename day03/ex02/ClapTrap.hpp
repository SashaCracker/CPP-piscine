#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
protected:
	std::string _name;
	int _hitPoints;
	int _energyPoints;
	int _attackDamage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &src);
	~ClapTrap();

	ClapTrap &operator=(const ClapTrap &other);

	const std::string &getName (void) const;
	int getHitPoints() const;
	int getEnergyPoints() const;
	int getAttackDamage() const;

	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

std::ostream &operator<<(std::ostream &out, const ClapTrap &myClass);

#endif
