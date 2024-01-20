#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Brain b1;
	b1.setId(0,"id1");
	Dog d1("dog");
	Dog d2 = d1;
	Dog d3(d2);
	delete j;//should not create a leak
	delete i;
return 0;
}
