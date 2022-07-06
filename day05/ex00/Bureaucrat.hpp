#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &src);
	virtual ~Bureaucrat();

	Bureaucrat &operator=(const Bureaucrat &other);

	const std::string &getName() const;
	int getGrade() const;

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
	void upGrade();
	void downGrade();
private:
	std::string	_name;
	int			_grade;

};

std::ostream &operator<<(std::ostream &stream, const Bureaucrat &myClass);

#endif
