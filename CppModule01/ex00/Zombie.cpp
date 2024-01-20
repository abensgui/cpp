#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	Name = name;
}

Zombie::~Zombie()
{
	std::cout << "Destructor of " << Name << " Called" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << Name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie *newZombie(std::string name)
{
	return (new Zombie(name));
}

void randomChump(std::string name)
{
	Zombie z = Zombie(name);
	z.announce();
}