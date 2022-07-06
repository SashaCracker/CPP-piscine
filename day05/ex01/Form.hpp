#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
public:
	Form();
	Form(const std::string & name, int gradeToSign, int gradeToExec);
	Form(const Form &copy);
	virtual ~Form();

	Form &operator=(const Form &other);

	const std::string &getName() const;
	bool getSign() const;
	int getGradeToSign() const;
	int getGradeToExec() const;

	class GradeTooHighException : public std::exception {
	public:
		GradeTooHighException() throw();
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		GradeTooLowException() throw();
		virtual const char *what() const throw();
	};

	void beSigned(Bureaucrat const &bureaucrat);
private:
	std::string	_name;
	bool				_sign;
	int			_gradeToSign;
	int			_gradeToExec;
};

std::ostream &operator<<(std::ostream &stream, const Form &other);

#endif
