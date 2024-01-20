#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	Name = name;
}

void HumanB::setWeapon(Weapon& y_weapon) 
{
	Y_weapon = &y_weapon;
}

HumanB::~HumanB()
{
	std::cout << "Destructor of HumanB called\n";
}
void HumanB::attack()
{
	if(Y_weapon)
		std::cout << Name <<" attacks with their " << Y_weapon->getType() << std::endl;
}

