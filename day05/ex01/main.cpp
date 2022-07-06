#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	Form *spec = new Form("Speial", 10, 30);
	Form *toHigh;
	Form *toLow;

	std::cout << *spec << std::endl;
	try {
		toHigh = new Form("ToHigh", 0, 20);
	} catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		toLow = new Form("ToLow", 10, 160);
	} catch (std::exception & e) {
		std::cerr << e.what() << std::endl;
	}

	Bureaucrat *human1 = new Bureaucrat("Tony", 5);
	human1->signForm(*spec);
	std::cout << *spec << std::endl;
	human1->signForm(*spec);

	Form *calendar = new Form("Calendar", 1, 1);
	Bureaucrat *max = new Bureaucrat("Max", 12);

	max->signForm(*calendar);

	delete spec;
	delete human1;
	delete calendar;
	delete max;
	return 0;
}
