#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {

	ClapTrap Parent ("Parent");
	ScavTrap Child1("Child1");
	FragTrap Child2("Child2");

	std::cout << Parent << std::endl;
	std::cout << Child1 << std::endl;
	std::cout << Child2 << std::endl;

	Parent.attack("Child1");
	Child1.takeDamage(40);
	Child1.beRepaired(5);
	Child1.attack("Parent");
	Parent.takeDamage(3);
	Parent.beRepaired(4);
	Child1.guardGate();
	Child2.attack("Parent");
	Child2.takeDamage(3);
	Child2.beRepaired(10);
	Child2.highFivesGuys();

	std::cout << std::endl;
	std::cout << Parent << std::endl;
	std::cout << Child1 << std::endl;
	std::cout << Child2 << std::endl;
	return 0;
}
