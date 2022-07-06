#include "Harl.hpp"

int main(int argc, char **argv) {
	Harl Nerd;

	if (argc != 2) {
		std::cout << "Error: arguments" << std::endl;
		return 1;
	}
	else
		Nerd.complain(argv[1]);
	return 0;
}
