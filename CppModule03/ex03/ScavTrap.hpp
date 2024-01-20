#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap :virtual public ClapTrap
{
protected:
	unsigned int EnergyPoints;
public:
	ScavTrap(/* args */);
	ScavTrap(std::string n);
	ScavTrap(ScavTrap const &c);
	ScavTrap &operator=(ScavTrap const &c);
	~ScavTrap();
	void attack(const std::string& target);
	void guardGate();
};
#endif
