#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Name ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "Copy ClapTrap constructor called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default ClapTrap destructor called" << std::endl;
}

const std::string &ClapTrap::getName (void) const
{
	return this->_name;
}

int ClapTrap::getHitPoints() const
{
	return this->_hitPoints;
}

int ClapTrap::getEnergyPoints() const
{
	return this->_energyPoints;
}

int ClapTrap::getAttackDamage() const
{
	return this->_attackDamage;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &other)
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

void ClapTrap::attack(const std::string &target)
{
	if (this->_hitPoints <= 0 || this->_energyPoints <= 0)
	{
		std::cout << "There is no hit points or energy for attack." <<
				  std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target <<
				  " causing " << this->_attackDamage << " points of damage! " <<  std::endl;
		this->_energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_energyPoints -= amount;
	if (this->_energyPoints <= 0)
		std::cout << "ClapTrap " << this->_name << " took " << amount <<
				  " critical damage " << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " took " << amount <<
				  " hit points " << this->_energyPoints << " energy points left "<<
				  std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		this->_energyPoints--;
		this->_energyPoints += amount;
		std::cout << "ClapTrap " << this->_name << " took " << amount <<
				  " repair points " << this->_energyPoints << " energy points left "<<
				  std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " doesn't have energy."<<
				  std::endl;
	}
}

std::ostream &operator << (std::ostream &myClass, ClapTrap const &instance)
{
	myClass << instance.getName() << std::endl;
	myClass << "Hit Points :" << instance.getHitPoints() << std::endl;
	myClass << "Energy Points : " << instance.getEnergyPoints() << std::endl;
	myClass << "Attack Damage :" << instance.getAttackDamage() << std::endl;
	return myClass;
}