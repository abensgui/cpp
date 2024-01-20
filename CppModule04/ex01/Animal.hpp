#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <string>
class Animal
{
protected:
	std::string Type;
public:
	Animal(/* args */);
	Animal(std::string t);
	Animal(Animal const &a);
	Animal &operator=(Animal const &a);
	virtual ~Animal();
	std::string getType() const;
	void setType(std::string t);
	virtual void makeSound() const;
};
#endif