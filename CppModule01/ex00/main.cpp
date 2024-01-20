#include "Zombie.hpp"

int main()
{
	Zombie *z = newZombie("zombie1");
	z->announce();
	randomChump("zombie2");
	delete z;
}