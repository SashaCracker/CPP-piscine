#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string name) {
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Name ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Default ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other)
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

void ScavTrap::attack(const std::string &target)
{
	if (this->_hitPoints <= 0 || this->_energyPoints <= 0)
	{
		std::cout << "There is no hit points or energy for attack." <<
				  std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target <<
				  " causing " << this->_attackDamage << " points of damage! " <<  std::endl;
		this->_energyPoints--;
	}
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap is now in Gate keeper mode!" << std::endl;
}
