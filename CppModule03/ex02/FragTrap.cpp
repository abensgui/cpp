#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default constructor FragTrap called\n";
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->Damage = 30;
}

FragTrap::FragTrap(std::string n) : ClapTrap(n)
{ 
	std::cout << " parameter constructor FragTrap called\n";
	this->HitPoints = 100;
	this->EnergyPoints = 100;
	this->Damage = 30;
}

FragTrap::FragTrap(FragTrap const &c)
{
	std::cout << "Copy constructor FragTrap called\n";
	this->Name = c.Name;
	this->HitPoints = c.HitPoints;
	this->EnergyPoints = c.EnergyPoints;
	this->Damage = c.Damage;
}

FragTrap &FragTrap::operator=(FragTrap const &c)
{
	std::cout << "Copy assignment operator FragTrap called\n";
	this->Name = c.Name;
	this->HitPoints = c.HitPoints;
	this->EnergyPoints = c.EnergyPoints;
	this->Damage = c.Damage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor FragTrap called\n";
}

void FragTrap::highFivesGuys()
{
	std::cout << "demande de high fives" << std::endl;
}
