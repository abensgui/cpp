#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal
{
private:

public:
	WrongCat(/* args */);
	WrongCat(std::string t);
	WrongCat(WrongCat const &a);
	WrongCat &operator=(WrongCat const &a);
	~WrongCat();
	void makeSound() const;
};
#endif