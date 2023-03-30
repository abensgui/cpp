#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat b("ayoub", 150);
		Form a("ben", 5, 5);
		b.signeForm(a);
		std::cout << b << std::endl;
		std::cout << a << std::endl;
	std::cout << "\n--------------------------------\n";
		Bureaucrat b1("ayoub", 10);
		Form a1("ben", 5, 5);
		b1.signeForm(a1);
		std::cout << b1 << std::endl;
		std::cout << a1 << std::endl;
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
