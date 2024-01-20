#include "Brain.hpp"
Brain::Brain()
{
	std::cout << "Default constructor Brain called\n";
}

Brain::Brain(Brain const &b)
{

	std::cout << "Copy constructor Brain called\n";
    int i = 0;
    while (i < 100)
    {
        this->ideas[i] = b.ideas[i];
        i++;
    }
}

Brain &Brain::operator=(Brain const &b)
{
	std::cout << "Copy assignment Brain operator called\n";
    int i = 0;
    while (i < 100)
    {
        this->ideas[i] = b.ideas[i];
        i++;
    }
    return (*this);
}

Brain::~Brain()
{
	std::cout << "Destructor Brain called\n";
}


std::string Brain::getId(int i) const
{
    if(i > 0 && i < 100)
        return this->ideas[i];
    else
        return 0;
}

void Brain::setId(int i, std::string id)
{
    if(i > 0 && i < 100)
        this->ideas[i] = id;
}