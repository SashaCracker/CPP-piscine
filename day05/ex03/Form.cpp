#include "Form.hpp"

Form::Form () {}

Form::Form(const std::string & name, int gradeToSign, int gradeToExec, std::string const &target)
{
	if (gradeToSign <= 0 || gradeToExec <= 0)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExec > 150)
		throw Form::GradeTooLowException();
	this->_name = name;
	this->_sign = false;
	this->_gradeToSign = gradeToSign;
	this->_gradeToExec = gradeToExec;
	this->_target = target;
}

Form::Form(const Form &copy)
{
	if (copy.getGradeToSign() <= 0 || copy.getGradeToExec() <= 0)
		throw Form::GradeTooHighException();
	else if (copy.getGradeToSign() > 150 || copy.getGradeToExec() > 150)
		throw Form::GradeTooLowException();
	this->_name = copy.getName();
	this->_sign = copy.getSign();
	this->_gradeToSign = copy.getGradeToSign();
	this->_gradeToExec = copy.getGradeToExec();
	this->_target =  copy.getTarget();
}

Form::~Form() {}

Form &Form::operator=(Form const &other) {
	if (this == &other)
		return (*this);
	if (other.getGradeToSign() <= 0 || other.getGradeToExec() <= 0)
		throw Form::GradeTooHighException();
	else if (other.getGradeToSign() > 150 || other.getGradeToExec() > 150)
		throw Form::GradeTooLowException();
	this->_name = other.getName();
	this->_sign = other.getSign();
	this->_gradeToSign = other.getGradeToSign();
	this->_gradeToExec = other.getGradeToExec();
	this->_target = other.getTarget();
	return (*this);
}

std::ostream &operator<<(std::ostream &stream, Form const &myForm) {
	stream << myForm.getName() << ": Form is";
	if (!myForm.getSign())
		stream << " not signed!";
	else
		stream << " signed!";
	stream << " This " << myForm.getName() << " Form is signable at grade: " << myForm.getGradeToSign();
	stream << ", and executable at grade: " << myForm.getGradeToExec() << ".";
	return stream;
}

const std::string &Form::getName() const { return _name; }
bool Form::getSign() const { return _sign; }
int Form::getGradeToSign() const { return _gradeToSign; }
int Form::getGradeToExec() const { return _gradeToExec; }
const std::string &Form::getTarget() const{ return _target; }

void Form::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() <= this->_gradeToSign)
		this->_sign = true;
	else
		throw GradeTooLowException();
}

void Form::beExecuted() const {}

void Form::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() > this->_gradeToExec)
		throw std::string("grade is to low.");
	if (this->_sign == false)
		throw std::string ("the form is not signed.");
	this->beExecuted();
}

Form::GradeTooHighException::GradeTooHighException() throw() {}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high for this Form!";
}

Form::GradeTooLowException::GradeTooLowException() throw() {}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low for this Form!";
}
