#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <string>
#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"



class DiamondTrap : public ScavTrap , public FragTrap
{
private:
	std::string Name;
public:
	DiamondTrap();
	DiamondTrap(std::string n1);
	DiamondTrap(DiamondTrap const &d);
	DiamondTrap &operator=(DiamondTrap const &d);
	~DiamondTrap();
	void whoAmi();
	void attack(std::string n);
	void displayDiamond();
};

#endif