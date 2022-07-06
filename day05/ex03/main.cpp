#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void testFormFoo(Bureaucrat &human1, Form *form) {
	std::cout << std::endl << "Sign and Execute: " << form->getName() << std::endl;
	human1.signForm(*form);
	human1.executeForm(*form);
}

void testIntern(Intern &intern, const std::string &formName, const std::string &targetName) {
	Bureaucrat human1(targetName, 1);
	Form *testForm;
	testForm = intern.makeForm(formName, targetName);
	if (testForm) {
		std::cout << *testForm;
		testFormFoo(human1, testForm);
		delete testForm;
	}
}

int main() {
	Intern randomIntern;

	testIntern(randomIntern, "shrubbery", "Tony");
	std::cout << std::endl;
	testIntern(randomIntern, "robotomy", "Max");
	std::cout << std::endl;
	testIntern(randomIntern, "pardon", "Alex");
	std::cout << std::endl;
	testIntern(randomIntern, "paper", "Bob!");

	return 0;
}
