#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& y_weapon) : Name(name), Y_weapon(y_weapon)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
    std::cout << Name <<" attacks with their " << Y_weapon.getType() << std::endl;
}
