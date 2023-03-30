#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	std::cout << "------------------test1-----------------\n";
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	delete i;
	delete j;
}
