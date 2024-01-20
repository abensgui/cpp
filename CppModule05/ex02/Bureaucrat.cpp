#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Default constructor Bureauucrat called\n";
}

Bureaucrat::Bureaucrat(std::string n, int g): Name(n), Grade(g)
{
	std::cout << "parameter constructor Bureauucrat called\n";
		if (Grade > 150)
			throw(Bureaucrat::GradeTooHighException());
		if (Grade < 1)
			throw(Bureaucrat::GradeTooLowException());
}

Bureaucrat::Bureaucrat(Bureaucrat const &b) : Name(b.Name), Grade(b.Grade)
{
	std::cout << "copy constructor Bureauucrat called\n";
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &b)
{
	std::cout << "copy assignment operator Bureauucrat called\n";
	Grade = b.Grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "destructor Bureauucrat called\n";
}

std::string Bureaucrat::getName() const
{
    return Name;
}

int Bureaucrat::getGrade() const
{
    return Grade;
}

void Bureaucrat::incrementgrade()
{

    if(Grade >= 150)
    {
        throw(Bureaucrat::GradeTooHighException());
    }
    Grade++;
}

void Bureaucrat::decrementgrade()
{

    if(Grade <= 1)
    {
        throw(Bureaucrat::GradeTooLowException());
    }
    Grade--;

}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade Too High\n" ;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade Too Low\n";
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &b)
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade();
	return out;
}

void Bureaucrat::signeForm(Form &f)
{
    try
    {
        f.beSigned(*this);
        std::cout << Name << " signed " << f.getName() << std::endl;
    }
    catch (Form::GradeTooLowException &e)
    {
        std::cout << Name << " couldn’t sign " << f.getName() << " because " << e.what() << std::endl;
    }
}

void Bureaucrat::executeForm(Form const &form)
{

    if (form.getGradeExecute() < Grade)
        throw (Form::GradeTooLowException());  
    std::cout << this->getName()<<" executed " << form.getName() << std::endl;

}
