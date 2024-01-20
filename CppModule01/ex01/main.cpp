#include "Zombie.hpp"

int main()
{
	int i;
	Zombie *z;
	i = 0;
	z = zombieHorde(10, "zombie");
	delete[] z;
}