#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string name) {
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Name FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & src)
{
	std::cout << "Copy FragTrap constructor called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap()
{
	std::cout << "Default FragTrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &other)
{
	std::cout << "Assignment operator called" <<std::endl;
	std::cout << other << std::endl;
	if (this == &other)
		return *this;
	this->_name = other.getName();
	this->_hitPoints = other.getHitPoints();
	this->_energyPoints = other.getEnergyPoints();
	this->_attackDamage = other.getAttackDamage();
	return *this;
}

void FragTrap::attack(const std::string &target)
{
	if (this->_hitPoints <= 0 || this->_energyPoints <= 0)
	{
		std::cout << "There is no hit points or energy for attack." <<
				  std::endl;
	}
	else
	{
		std::cout << "FragTrap " << this->_name << " attacks " << target <<
				  " causing " << this->_attackDamage << " points of damage! " <<  std::endl;
		this->_energyPoints--;
	}
}

void FragTrap::highFivesGuys()
{
	std::cout << "High fives, dude!" << std::endl;
}

