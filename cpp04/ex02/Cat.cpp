#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Default constructor Cat called\n";
    Type = "cat";
    B = new Brain();
}

Cat::Cat(std::string t)
{
	std::cout << "parameter constructor Cat called\n";
    Type = t;
	B = new Brain();
}

Cat::Cat(Cat const &a)
{
	std::cout << "Copy constructor Cat called\n";
    Type = a.Type;
    B = new Brain();
    *B = *(a.B);
}

Cat &Cat::operator=(Cat const &a)
{
	std::cout << "Copy assignment Cat operator called\n";
    this->Type = a.Type;
    *B = *(a.B);
    return (*this);
}

Cat::~Cat()
{
	std::cout << "Destructor Cat called\n";
    delete B;
}

void Cat::makeSound() const
{
    std::cout << "sound cat\n";
}


