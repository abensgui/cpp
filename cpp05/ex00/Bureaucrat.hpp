#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <string>
#include <iostream>

class Bureaucrat
{
private:
	std::string const Name;
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
std::ostream &operator<<(std::ostream &out, const Bureaucrat &b);
#endif