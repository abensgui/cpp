#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
class Cat : public Animal
{
private:

public:
	Cat(/* args */);
	Cat(std::string t);
	Cat(Cat const &a);
	Cat &operator=(Cat const &a);
	~Cat();
	void makeSound() const;
};
#endif