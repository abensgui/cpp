#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
	std::cout << "parameter constructor Intern called\n";
}

Intern::Intern(Intern const &i)
{
	(void)i;
    std::cout << "copy constructor Intern called\n";
}

Intern &Intern::operator=(Intern const &f)
{
	(void)f;
        std::cout << "copy assignment operator Intern called\n";
		return (*this);
}

Intern::~Intern()
{
    std::cout << "destructor Intern called\n";
}

Form *Intern::NewShrubbery(std::string t)
{
    return (new ShrubberyCreationForm(t));
}

Form *Intern::NewRobotomy(std::string t)
{
    return (new RobotomyRequestForm(t));
}

Form *Intern::NewPresidential(std::string t)
{
    return (new PresidentialPardonForm(t));
}

Form *Intern::makeForm(std::string f, std::string t)
{
	Intern ob;
	int i;
	i = 0;
	Form *(Intern::*ptr[3])(std::string t) = {&Intern::NewShrubbery, &Intern::NewRobotomy, &Intern::NewPresidential};
	std::string	form[3] = {"shrubbery creation", "robotomy request", "presidential pardon" };
	while(i < 3)
	{
		if(f == form[i])
		{
			std::cout << "Intern creates " << t << std::endl; 
			return((ob.*ptr[i])(t));
		}
		i++;
	}
	std::cerr << "form name passed as parameter doesn’t exist\n" ;
	return(NULL);
}

