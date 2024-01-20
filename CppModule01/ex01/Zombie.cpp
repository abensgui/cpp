#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	Name = name;
}

Zombie::~Zombie()
{
	std::cout << "destructor" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << Name << ": BraiiiiiiinnnzzzZ...\n";
}
Zombie::Zombie()
{
}
std::string Zombie::getName(void)
{
    return Name;
}
void Zombie::setName(std::string n)
{
	Name = n;
}

Zombie *zombieHorde(int N, std::string name)
{
	int	i;
	i = 0;
	Zombie *z;
	if(N > 0 && N <= 2147483647)
	{
		z = new Zombie[N];
    	while(i < N)
		{
			z[i].setName(name);
			z[i].announce();
			i++;
		}
		return z;
	}
	return nullptr;
}
