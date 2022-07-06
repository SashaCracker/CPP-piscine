#include "Zombie.hpp"

Zombie::Zombie(){
	std::string  name = "Foo";
	this->_name = name;
	std::cout << this->_name << " was born" << std::endl;
}

Zombie::~Zombie() {
	std::cout << this->_name << " is died" << std::endl;
}

void Zombie::announce() {
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
	this->_name = name;
}
