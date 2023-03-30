#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
private:
	std::string const Name;
	bool signe;
	const int gradeSignd;
	const int gradeExecute;

public:
	Form(/* args */);
	Form(std::string name, int gs, int ge);
	Form(Form const &f);
	Form & operator=(Form const &f);
	virtual ~Form();
	std::string getName() const;
	bool getsigne() const;
	int getGradeSignd() const;
	int getGradeExecute() const;
	void beSigned(Bureaucrat &b);
	virtual void execute(Bureaucrat const &executor) const = 0;
	class GradeTooHighException : std::exception
	{
	public:
		const char *what() const throw();
	};
	class GradeTooLowException : std::exception
	{
	public:
		const char *what() const throw();
	};
};
std::ostream &operator<<(std::ostream &out, const Form &b);
#endif