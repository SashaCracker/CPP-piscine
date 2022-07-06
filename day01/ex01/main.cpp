#include "Zombie.hpp"

int main() {
	Zombie *horde = zombieHorde(Z_num, "Boo");
	int i = 0;
	while (i < Z_num)
	{
		horde[i].announce();
		i++;
	}
	delete [] horde;
	return 0;
}
