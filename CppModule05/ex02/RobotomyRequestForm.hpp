#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP


#include "Form.hpp"
#include <time.h>
#include <cstdlib>

class RobotomyRequestForm : public Form
{
private:
    /* data */
    std::string const target;
public:
    RobotomyRequestForm(/* args */);
    RobotomyRequestForm(std::string const t);
    RobotomyRequestForm &operator=(RobotomyRequestForm const &t);
    RobotomyRequestForm(RobotomyRequestForm const &r);
    ~RobotomyRequestForm();
    std::string getTarget() const;
    void execute(Bureaucrat const & executor) const;
};

#endif