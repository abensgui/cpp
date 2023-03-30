#include "Form.hpp"

Form::Form(): Name("") , signe(false) , gradeSignd(0), gradeExecute(0)
{
    std::cout << "Default constructor Form called\n";
}


Form::Form(std::string name, const int gs,const int ge): Name(name), signe(false), gradeSignd(gs), gradeExecute(ge)
{
    std::cout << "parameter constructor Form called\n";
    if (gs > 150 || ge > 150)
		throw(Form::GradeTooHighException());
	if (gs < 1 || ge < 1)
		throw(Form::GradeTooLowException());
}

Form::Form(Form const &f): Name(f.Name), signe(f.signe) , gradeSignd(f.gradeSignd), gradeExecute(f.gradeExecute)
{
    std::cout << "copy constructor Form called\n";
}
Form &Form::operator=(Form const &f)
{
    std::cout << "copy assignment operator Form called\n";
    signe = f.signe;
    return(*this);
}
Form::~Form()
{
    std::cout << "destructor Form called\n";
}

std::string Form::getName() const
{
    return Name;
}

bool Form::getsigne() const
{
    return signe;
}

int Form::getGradeSignd() const
{
    return gradeSignd;
}

int Form::getGradeExecute() const
{
    return gradeExecute;
}

void Form::beSigned(Bureaucrat &b)
{

    if(b.getGrade() > gradeSignd)
    {
        throw(Form::GradeTooLowException());
    }
    signe = true;
}

std::ostream &operator<<(std::ostream &out, const Form &b)
{
    out << "Name " << b.getName() << " signe " << b.getsigne() << " grde signe " << b.getGradeSignd() << " grade Execute "<< b.getGradeExecute() ;
	return out;
}


const char *Form::GradeTooHighException::what() const throw()
{
    return "Grade Too High\n" ;
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Grade Too Low\n" ;
}