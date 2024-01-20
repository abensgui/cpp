 #include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default constructor WrongAnimal called\n";
	Type = "";
}

WrongAnimal::WrongAnimal(std::string t)
{
	std::cout << "parameter constructor WrongAnimal called\n";
	this->Type = t;
}

WrongAnimal::WrongAnimal(WrongAnimal const &a)
{
	std::cout << "Copy constructor WrongAnimal called\n";
	this->Type = a.Type;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &a)
{
	std::cout << "Copy assignment operator WrongAnimal called\n";
    this->Type = a.Type;
	return(*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor WrongAnimal called\n";

}

std::string WrongAnimal::getType() const
{
    return Type;
}

void WrongAnimal::setType(std::string t)
{
	this->Type = t;
}

void WrongAnimal::makeSound() const
{
	std::cout << "sound Wronganimal\n";
}
