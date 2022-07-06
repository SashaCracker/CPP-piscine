#include "Zombie.hpp"

int main() {

	std::cout << "~~ Zombie on the Heap ~~" << std::endl;
	Zombie *firstzombie = newZombie("Boo");
	firstzombie->announce();
	delete firstzombie;
	std::cout << std::endl;
	std::cout << "~~ Zombie on the Stack ~~" << std::endl;
	randomChump("Foo");
	return (0);
}
