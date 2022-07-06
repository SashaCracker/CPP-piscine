#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::complain(std::string level)
{
	void	(Harl::*complaint[4])( void );
	complaint[0] = &Harl::debug;
	complaint[1] = &Harl::info;
	complaint[2] = &Harl::warning;
	complaint[3] = &Harl::error;
	std::string complaintLevels[4] = {"DEBUG", "INFO", "WARNING","ERROR"};
	int i = 0;
	for (i = 0; i < 4; i++)
		if (level == complaintLevels[i])
			break ;
	switch (i)
	{
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			(this->*complaint[0])();
		case 1:
			std::cout <<"[ INFO ]"<< std::endl;
			(this->*complaint[1])();
		case 2:
			std::cout << "[ WARNING ]"<< std::endl;
			(this->*complaint[2])();
		case 3:
			std::cout << "[ ERROR ]"<< std::endl;
			(this->*complaint[3])();
			break;
		default:
			std::cout << "Incorrect level" << std::endl;
	}
}

void Harl::debug(void) {
	std::cout << "I love having extra bacon for my "
				 "7XL-double-cheese-triple-pickle-special-ketchup burger. I "
				 "really do!" << std::endl;
}

void Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You "
				 "didn’t put enough bacon in my burger! If you did, I "
				 "wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve "
				 "been coming for years whereas you started working here since"
				 "last month." << std::endl;
}

void Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now."
			  << std::endl;
}
