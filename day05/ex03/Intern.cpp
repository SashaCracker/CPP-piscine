#include "Intern.hpp"

//Form* createShrubberyCreationForm(std::string const &target) { return new ShrubberyCreationForm(target); }
//Form* createRobotomyRequestForm(std::string const &target) { return new RobotomyRequestForm(target); }
//Form* createPresidentialPardonForm(std::string const &target) { return new PresidentialPardonForm(target); }

Intern::Intern() {}

Intern::Intern(const Intern &intern) { (void)intern; }

Intern::~Intern() {}

Intern &Intern::operator=(const Intern &intern) {
	if (this == &intern)
		return *this;
	return *this;
}

Form* Intern::makeForm(const std::string &formName, const std::string &target) {
	Form *newForm;
	newForm = 0;
	std::string type[3];
	type[0] = "shrubbery";
	type[1] = "robotomy";
	type[2] = "pardon";
	Form * form[3];
	form[0] = new ShrubberyCreationForm(target);
	form[1] = new RobotomyRequestForm(target);
	form[2] = new PresidentialPardonForm(target);
	for (int i = 0; i < 3; ++i)
	{
		if (type[i] == formName) {
			newForm = form[i];
			std::cout << "Intern create " << newForm->getName() << std::endl;
		}
		else
			delete form[i];
	}
	std::cout << "Intern didn't create " << formName << " Form. There is no such type of form!" << std::endl;
	return newForm;
}
