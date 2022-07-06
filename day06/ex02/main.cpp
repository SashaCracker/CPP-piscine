#include "Base.hpp"

int main() {

	std::cout << "------Wrong test-----" << std::endl;
	Base *nonValid = new Base();
	if (!nonValid) {
		std::cout << "Error allocate" << std::endl;
		return -1;
	}
	std::cout << "Pointer: " << std::endl;
	identify(nonValid);
	std::cout << "Reference: " << std::endl;
	identify(*nonValid);
	std::cout<< std::endl;
	delete nonValid;

	std::cout << "------Normal test-----" << std::endl;
	Base *valid;
	valid = generate();
	if (!valid) {
		std::cout << "Error allocate" << std::endl;
		return -1;
	}
	std::cout << "Pointer: " << std::endl;
	identify(valid);
	std::cout << "Reference: " << std::endl;
	identify(*valid);
	delete valid;

	return 0;
}
