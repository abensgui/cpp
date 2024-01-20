#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	Type = type;
}

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
}


const std::string &Weapon::getType() const
{
	return Type;
}

void Weapon::setType(std::string type)
{
	Type = type;
}