#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap Parent ("Parent");
	ScavTrap Child("Child");

	std::cout << Parent << std::endl;
	std::cout << Child << std::endl;

	Parent.attack("Child");
	Child.takeDamage(40);
	Child.beRepaired(5);
	Child.attack("Parent");
	Parent.takeDamage(3);
	Parent.beRepaired(4);
	Child.guardGate();

	std::cout << std::endl;
	std::cout << Parent << std::endl;
	std::cout << Child << std::endl;

	return 0;
}
