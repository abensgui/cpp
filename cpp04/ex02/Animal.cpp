 #include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Default constructor Animal called\n";
}

Animal::Animal(std::string t)
{
	std::cout << "parameter constructor Animal called\n";
	this->Type = t;
}

Animal::Animal(Animal const &a)
{
	std::cout << "Copy constructor Animal called\n";
	this->Type = a.Type;
}

Animal &Animal::operator=(Animal const &a)
{
	std::cout << "Copy assignment operator Animal called\n";
    this->Type = a.Type;
	return(*this);
}

Animal::~Animal()
{
	std::cout << "Destructor Animal called\n";

}

std::string Animal::getType() const
{
    return Type;
}

void Animal::setType(std::string t)
{
	this->Type = t;
}