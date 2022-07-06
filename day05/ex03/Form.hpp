#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
public:
	Form();
	Form(const std::string & name, int gradeToSign, int gradeToExec, std::string const &target);
	Form(const Form &copy);
	virtual ~Form();

	Form &operator=(const Form &other);

	virtual const std::string &getName() const;
	virtual bool getSign() const;
	virtual int getGradeToSign() const;
	virtual int getGradeToExec() const;
	virtual const std::string &getTarget() const;

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

	virtual void beSigned(Bureaucrat const &bureaucrat);
	virtual void execute(Bureaucrat const & executor) const;
private:
	std::string			_name;
	bool				_sign;
	int			_gradeToSign;
	int			_gradeToExec;
	std::string		 _target;
	virtual void beExecuted() const = 0;
};

std::ostream &operator<<(std::ostream &stream, const Form &other);

#endif
