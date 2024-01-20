#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form()
{
	std::cout << "Default constructor PresidentialPardonForm called\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string t) : Form("PresidentialPardonForm", 145, 137), target(t)
{
	std::cout << "parameter constructor PresidentialPardonForm called\n";
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &p) : target(p.target)
{
	std::cout << "copy constructor PresidentialPardonForm called\n";
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &t)
{
	std::cout << "copy assignment operator PresidentialPardonForm called\n";
	(void)t;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "destructor PresidentialPardonForm called\n";
}

std::string PresidentialPardonForm::getTarget() const
{
	return target;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{

	if (this->getGradeSignd() < executor.getGrade() || this->getGradeExecute() < executor.getGrade())

		throw(Form::GradeTooLowException());

	std::cout << target << " has been pardoned by Zaphod Beeblebrox\n";

}
