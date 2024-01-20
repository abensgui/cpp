#include "ShrubberyCreationForm.hpp"
ShrubberyCreationForm::ShrubberyCreationForm() : Form()
{
	std::cout << "Default constructor ShrubberyCreationForm called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const t) : Form("ShrubberyCreationForm", 25, 5), target(t)
{
	std::cout << "parameter constructor ShrubberyCreationForm called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &p) : target(p.target) 
{
	std::cout << "copy constructor ShrubberyCreationForm called\n";
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &t)
{
	std::cout << "copy assignment operator ShrubberyCreationForm called\n";
	(void)t;
	return(*this);
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "destructor ShrubberyCreationForm called\n";
}

std::string ShrubberyCreationForm::getTarget() const
{
    return target;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{

	std::cout << this->getGradeSignd()<<std::endl;
	std::cout << this->getGradeExecute()<<std::endl;
	std::cout << executor.getGrade()  <<std::endl;
	if (this->getGradeSignd() <  executor.getGrade() || this->getGradeExecute() < executor.getGrade())
	{
		throw (Form::GradeTooLowException());  
	}
	std::fstream f;
	f.open(target + "_shrubbery", std::fstream::out);
			f   <<    "        # #### ####\n"
				<<    "      ### \\/#|### |/####\n"
				<<    "     ##\\/#/ \\||/##/_/##/_#\n"
				<<    "    ###  \\/###|/ \\/ # ###\n"
				<<    "   ##_\\_#\\_\\## | #/###_/_####\n"
				<<    "  ## #### # \\ #| /  #### ##/##\n"
				<<    "   __#_--###`  |{,###---###-~\n"
				<<    "             \\ }{\n"
				<<    "              }}{\n"
				<<    "              }}{\n";
}
