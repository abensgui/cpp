#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"
class HumanA
{
private:
	std::string Name;
	Weapon& Y_weapon;
public:
	HumanA(std::string name, Weapon& y_weapon);
	~HumanA();
	void attack();
};

#endif