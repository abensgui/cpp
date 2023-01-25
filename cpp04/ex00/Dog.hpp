#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
class Dog : public Animal
{
private:

public:
	Dog(/* args */);
	Dog(std::string t);
	Dog(Dog const &a);
	Dog &operator=(Dog const &a);
	~Dog();
	void makeSound() const;
};
#endif