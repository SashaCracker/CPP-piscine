#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {}
HumanB::~HumanB() {}

void HumanB::attack() const
{
	std::cout << _name << " attack with his " << _weapon->getType() <<
	std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}
