#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		Bureaucrat b1("ayoub", 1);
		PresidentialPardonForm p1("p");
		RobotomyRequestForm r1("r");
		ShrubberyCreationForm s1("s");
		p1.execute(b1);
		r1.execute(b1);
		s1.execute(b1);

		std::cout << "\n-------------------------------------\n";

		Bureaucrat b2("ayoub", 5);
		PresidentialPardonForm p2("p");
		RobotomyRequestForm r2("r");
		ShrubberyCreationForm s2("s");
		p2.execute(b2);
		r2.execute(b2);
		s2.execute(b2);
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what();
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what();
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cout << e.what();
	}
	catch (Form::GradeTooHighException &e)
	{
		std::cout << e.what();
	}
	catch (...)
	{
		std::cout << "Default Exception\n";
	}
}