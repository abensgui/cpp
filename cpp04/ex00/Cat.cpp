#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default constructor Cat called\n";
    Type = "cat";
}

Cat::Cat(std::string t)
{
	std::cout << "parameter constructor Cat called\n";
    Type = t;
}

Cat::Cat(Cat const &a)
{
	std::cout << "Copy constructor Cat called\n";
    Type = a.Type;
}

Cat &Cat::operator=(Cat const &a)
{
	std::cout << "Copy assignment Cat operator called\n";
    this->Type = a.Type;
    return (*this);
}

Cat::~Cat()
{
	std::cout << "Destructor Cat called\n";
}

void Cat::makeSound() const
{
    std::cout << "sound cat\n";
}
