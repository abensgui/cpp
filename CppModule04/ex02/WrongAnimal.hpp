#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
#include <string>
class WrongAnimal
{
protected:
	std::string Type;
public:
	WrongAnimal(/* args */);
	WrongAnimal(std::string t);
	WrongAnimal(WrongAnimal const &a);
	WrongAnimal &operator=(WrongAnimal const &a);
	~WrongAnimal();
	std::string getType() const;
	void setType(std::string t);
	void makeSound() const;
};
#endif