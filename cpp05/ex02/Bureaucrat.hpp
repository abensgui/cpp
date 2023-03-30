#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <string>
#include <iostream>

#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	std::string Name;
	int Grade;

public:
	Bureaucrat(/* args */);
	Bureaucrat(std::string n, int g);
	Bureaucrat(Bureaucrat const &b);
	Bureaucrat &operator=(Bureaucrat const &b);
	~Bureaucrat();
	std::string getName() const;
	int getGrade() const;
	void incrementgrade();
	void decrementgrade();
	void signeForm(Form &f);
	void executeForm(Form const &form);
	class GradeTooHighException : std::exception
	{
	public:
		const char *what() const throw();
	};
	class GradeTooLowException
	{
	public:
		const char *what() const throw();
	};
};
std::ostream &operator<<(std::ostream &out, const Bureaucrat &b);
#endif