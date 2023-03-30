#ifndef SURUBERYCREATIONFORM_HPP
#define SURUBERYCREATIONFORM_HPP

#include <fstream>
#include "Form.hpp"


class ShrubberyCreationForm : public Form
{
private:
    /* data */
    std::string const target;
public:
    ShrubberyCreationForm(/* args */);
    ShrubberyCreationForm(std::string const t);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &t);
    ShrubberyCreationForm(ShrubberyCreationForm const &r);
    ~ShrubberyCreationForm();
    std::string getTarget() const;
    void execute(Bureaucrat const & executor) const;
};

#endif