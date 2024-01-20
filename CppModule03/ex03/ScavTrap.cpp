#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default constructor ScavTrap called\n";
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->Damage = 20;
}

ScavTrap::ScavTrap(std::string n) : ClapTrap(n)
{ 
	std::cout << " parameter ScavTrap constructor called\n";
	this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->Damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const &c)
{
	std::cout << "Copy constructor ScavTrap called\n";
	this->Name = c.Name;
	this->HitPoints = c.HitPoints;
	this->EnergyPoints = c.EnergyPoints;
	this->Damage = c.Damage;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &c)
{
	std::cout << "Copy assignment operator ScavTrap called\n";
	this->Name = c.Name;
	this->HitPoints = c.HitPoints;
	this->EnergyPoints = c.EnergyPoints;
	this->Damage = c.Damage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor ScavTrap called\n";
}

void ScavTrap::guardGate()
{
	std::cout << this->Name << " entré en mode Gate keeper" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if(EnergyPoints > 0 && HitPoints > 0)
	{
		EnergyPoints--;
		std::cout <<  "ScavTrap " << this->Name << " attacks " << target << ", causing " << this->Damage << " points of damage!\n";
	}
	else if(EnergyPoints <= 0)
		std::cout << "EnergyPoints is 0\n";
	else
		std::cout << this->Name << " is die\n";
}
