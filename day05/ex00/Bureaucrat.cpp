#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	std::cout << "Constructor: "<< name << " has the " << grade << " grade level"
	<< std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	*this = src;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
	if (this == &other)
		return *this;
	this->_name = other.getName();
	this->_grade = other.getGrade();
	return *this;
}

std::ostream &operator<<(std::ostream &stream, Bureaucrat const &other) {
	stream << "STDOUT : "<< other.getName() << ", Bureaucrat grade " << other
	.getGrade();
	return stream;
}

const std::string &Bureaucrat::getName() const
{
	return this->_name;
}

int Bureaucrat::getGrade() const
{
	return this->_grade;
}

void Bureaucrat::upGrade() {
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else {
		this->_grade--;
		std::cout << "Function : "<< _name << " upgraded the level! Grade is "
		<<
		_grade <<
		std::endl;
	}
}

void Bureaucrat::downGrade() {
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else {
		this->_grade++;
		std::cout << "Function : " << _name << " downgraded the level! Grade is " <<
		_grade << std::endl;
	}
}

Bureaucrat::GradeTooHighException::GradeTooHighException() throw() {}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high!";
}

Bureaucrat::GradeTooLowException::GradeTooLowException() throw() {}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low!";
}
