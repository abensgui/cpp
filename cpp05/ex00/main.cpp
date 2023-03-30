#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat a("ben", 3);
		a.decrementgrade();
		a.decrementgrade();
		std::cout << a << std::endl;
		Bureaucrat b("ayoub", 149);
		b.incrementgrade();
		std::cout << a << std::endl;
		b.incrementgrade();
		std::cout << a << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << e.what();
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what();
	}
	catch (...)
	{
		std::cout << "Default Exception\n";
	}
}