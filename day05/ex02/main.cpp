#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

static void testForm(Bureaucrat *b, Form *form) {
	std::cout << std::endl << "Sign and Execute: " << form->getName() << std::endl;
 	b->signForm(*form);
	b->executeForm(*form);
}

int main() {
	ShrubberyCreationForm *creator = new ShrubberyCreationForm("Creator");
	//S - 145 Ex - 137
	RobotomyRequestForm *request = new RobotomyRequestForm("Request");
	//S - 72 Ex - 45
	PresidentialPardonForm *pardon = new PresidentialPardonForm("Pardon");
	//S - 25 Ex - 5

	Bureaucrat *human1 = new Bureaucrat("Tony", 120);
	Bureaucrat *human2 = new Bureaucrat("Max", 33);
	Bureaucrat *human3 = new Bureaucrat("Alex", 1);

	testForm(human1, creator); //Can s, can ex
	testForm(human1, request); // Can not s, can not ex
	testForm(human1, pardon); // Can not s, can not ex

	std::cout << std::endl;

	testForm(human2, creator); //Can s, can ex
	testForm(human2, request); //Can s, can ex
	testForm(human2, pardon); // Can not s, can not ex

	std::cout << std::endl;

	testForm(human3, creator); //Can s, can ex
	testForm(human3, request); //Can s, can ex
	testForm(human3, pardon); //Can s, can ex

	delete creator;
	delete request;
	delete pardon;
	delete human1;
	delete human2;
	delete human3;

	return 0;
}
