#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
int main()
{
	std::cout << "------------------test1-----------------\n";
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;
	
	std::cout << "------------------test2-----------------\n";
	const WrongAnimal *m = new WrongAnimal();
	const WrongAnimal *ii = new WrongCat();
	std::cout << ii->getType() << " " << std::endl;
	ii->makeSound(); // will output the cat sound!
	m->makeSound();
	delete m;
	delete ii;
}