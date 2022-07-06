#include "Bureaucrat.hpp"

int main() {
	Bureaucrat *human1 = new Bureaucrat("Tony", 2);
	{
		try {
			std::cout << *human1 << std::endl;
			human1->upGrade();
			std::cout << *human1 << std::endl;
			human1->upGrade();
			std::cout << "Exception doesn't work." << std::endl;
		} catch (std::exception & e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}
		std::cout << std::endl;
	}

	Bureaucrat *human2 = new Bureaucrat("Max", 150);
	{
		try {
			std::cout << *human2 << std::endl;
			human2->downGrade();
			std::cout << *human2 << std::endl;
			human2->downGrade();
			std::cout << "Exception doesn't work." << std::endl;
		} catch (std::exception & e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}
		std::cout << std::endl;
	}

	Bureaucrat *toHigh;
	{
		try {
			toHigh = new Bureaucrat("ToHigh", 0);
			toHigh->upGrade();
			std::cerr << "Exception doesn't work." << std::endl;
		} catch (std::exception & e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}
		std::cout << std::endl;
	}

	Bureaucrat *toLow;
	{
		try {
			toLow = new Bureaucrat("ToLow", 160);
			toLow->downGrade();
			std::cerr << "Exception doesn't work." << std::endl;
		} catch (std::exception & e) {
			std::cout << "Exception: " << e.what() << std::endl;
		}
	}

	delete human1;
	delete human2;
	return 0;
}
