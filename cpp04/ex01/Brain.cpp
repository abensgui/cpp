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
    return this->ideas[i];
}

void Brain::setId(int i, std::string id)
{
    this->ideas[i] = id;
}
