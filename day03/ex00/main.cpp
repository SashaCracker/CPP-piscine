#include "ClapTrap.hpp"

int main() {
	ClapTrap Player0;
	ClapTrap Player1("Player1");
	ClapTrap Player2(Player1);
	ClapTrap Player3("Player2");
	Player2 = Player3;

	std::cout << Player1 << std::endl;
	std::cout << Player2 << std::endl;

	Player1.attack("Player2");
	Player2.takeDamage(40);
	Player2.beRepaired(5);
	Player2.attack("Player1");
	Player1.takeDamage(3);
	Player1.beRepaired(4);

	std::cout << std::endl;
	std::cout << Player1 << std::endl;
	std::cout << Player2 << std::endl;

	return 0;
}
