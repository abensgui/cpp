#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form()
{
	std::cout << "Default constructor RobotomyRequestForm called\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string const t) : Form("RobotomyRequestForm", 72, 45), target(t)
{
	std::cout << "parameter constructor RobotomyRequestForm called\n";
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &p): target(p.target)
{
	std::cout << "copy constructor RobotomyRequestForm called\n";
}
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &t)
{

    std::cout << "copy assignment operator RobotomyRequestForm called\n";
	(void)t;
	return(*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "destructor RobotomyRequestForm called\n";
}
std::string RobotomyRequestForm::getTarget() const
{
    return target;
}
void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{

	if (this->getGradeSignd() <  executor.getGrade() || this->getGradeExecute() < executor.getGrade())
	{
		throw (Form::GradeTooLowException());  
	}
	srand(time(0));
	if(rand() % 2 == 0)
		std::cout << target << " has been robotomized successfully\n";
	else
		std::cout << target << " has been robotomized failed\n";

}

