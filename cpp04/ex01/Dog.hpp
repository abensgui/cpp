#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain* b;
public:
	Dog(/* args */);
	Dog(std::string t);
	Dog(Dog const &a);
	Dog &operator=(Dog const &a);
	~Dog();
	void makeSound() const;
};
#endif