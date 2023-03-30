
#include "Intern.hpp"


int main()
{
	try
	{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		Bureaucrat b1("ayoub", 1);
		rrf->execute(b1);
		if(rrf)
		{
		std::cout << rrf->getName() << std::endl;
		delete(rrf);
		}
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