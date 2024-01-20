#ifndef HUMANB_HPP
#define HUMANB_HPP


#include <iostream>
#include <string>
#include "Weapon.hpp"
class HumanB
{
private:
	std::string Name;
	Weapon  *Y_weapon;
public:
	HumanB(std::string name);
	void    setWeapon(Weapon& y_weapon);
	~HumanB();
	void attack();
};
#endif