#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
public:
	void attack(void) const;
	void setWeapon(Weapon &weapon);
	HumanB(std::string name);
	~HumanB();
private:
	std::string _name;
	Weapon		*_weapon;
};

#endif
