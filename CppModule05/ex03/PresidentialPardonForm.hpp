#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
    std::string const target;

public:
    PresidentialPardonForm(/* args */);
    PresidentialPardonForm(std::string const t);
    PresidentialPardonForm &operator=(PresidentialPardonForm const &t);
    PresidentialPardonForm(PresidentialPardonForm const &p);
    ~PresidentialPardonForm();
    std::string getTarget() const;
    void execute(Bureaucrat const &executor) const;
};

#endif