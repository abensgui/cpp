#ifndef INTERN_HPP
#define INTERN_HPP


#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
private:
    /* data */
public:
    Intern(/* args */);
    Intern(Intern const &i);
    Intern & operator=(Intern const &f);

    ~Intern();
    Form *makeForm(std::string f, std::string t);
    Form  *NewShrubbery(std::string t);
    Form  *NewRobotomy(std::string t);
    Form  *NewPresidential(std::string t);
}; 


#endif