#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default constructor Dog called\n";
    Type = "Dog";
}

Dog::Dog(std::string t)
{
	std::cout << "parameter constructor Dog called\n";
    Type = t;
}

Dog::Dog(Dog const &a)
{
	std::cout << "Copy constructor Dog called\n";
    Type = a.Type;
}
Dog &Dog::operator=(Dog const &a)
{
	std::cout << "Copy assignment operator Dog called\n";
    this->Type = a.Type;
    return (*this);
}

Dog::~Dog()
{
	std::cout << "Destructor Dog called\n";
}

void Dog::makeSound() const
{
    std::cout << "sound Dog\n";
}
