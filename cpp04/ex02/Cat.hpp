#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain* b;

public:
	Cat(/* args */);
	Cat(std::string t);
	Cat(Cat const &a);
	Cat &operator=(Cat const &a);
	~Cat();
	void makeSound();
};
#endif