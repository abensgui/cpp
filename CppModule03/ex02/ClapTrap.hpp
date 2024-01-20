#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
protected:
	/* data */
	std::string Name;
	unsigned int HitPoints;
	unsigned int EnergyPoints;
	unsigned int Damage;

public:
	ClapTrap();
	ClapTrap(std::string n);
	ClapTrap(ClapTrap const &c);
	ClapTrap &operator=(ClapTrap const &c);
	~ClapTrap();
	///////////////
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void diplay();
	std::string getName() const;
	unsigned int getHitPoints() const;
	unsigned int getEnergyPoints() const;
	unsigned int getDamage() const;
};

#endif
