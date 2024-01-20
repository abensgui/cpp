#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default constructor Dog called\n";
	Type = "Dog";
	B = new Brain();
}

Dog::Dog(std::string t)
{
	std::cout << "parameter constructor Dog called\n";
	Type = t;
	B = new Brain();
}

Dog::Dog(Dog const &a)
{
	std::cout << "Copy constructor Dog called\n";
	Type = a.Type;
	B = new Brain();
	*B = *(a.B);
}

Dog &Dog::operator=(Dog const &a)
{
	std::cout << "Copy assignment operator Dog called\n";
	this->Type = a.Type;
	*B = *(a.B);
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Destructor Dog called\n";
	delete B;
}

void Dog::makeSound() const
{
	std::cout << "sound Dog\n";
}
