#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "Default constructor WrongCat called\n";
    Type = "Wrongcat";
}

WrongCat::WrongCat(std::string t)
{
	std::cout << "parameter constructor WrongCat called\n";
    Type = t;
}

WrongCat::WrongCat(WrongCat const &a)
{
	std::cout << "Copy constructor WrongCat called\n";
    Type = a.Type;
}

WrongCat &WrongCat::operator=(WrongCat const &a)
{
	std::cout << "Copy assignment WrongCat operator called\n";
    this->Type = a.Type;
    return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor WrongCat called\n";
}

void WrongCat::makeSound() const
{
    std::cout << "sound Wrongcat\n";
}
