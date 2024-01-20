#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Default constructor  DiamondTrap called \n";
	this->HitPoints = FragTrap::HitPoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->Damage = FragTrap::Damage;
}

DiamondTrap::DiamondTrap(std::string n1)
{
	std::cout << "parameter constructor DiamondTrap called\n";
	Name = n1;
	ClapTrap::Name = n1 + "_clap_name";
	this->HitPoints = FragTrap::HitPoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->Damage = FragTrap::Damage;
}

DiamondTrap::DiamondTrap(DiamondTrap const &d)
{
	std::cout << "Copy constructor DiamondTrap called\n";
	this->Name = d.Name;
	ClapTrap::Name = d.Name + "_clap_name";
	this->HitPoints = d.HitPoints;
	this->EnergyPoints = d.EnergyPoints;
	this->Damage = d.Damage;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &d)
{
	std::cout << "Copy assignment operator DiamondTrap called\n";
    this->Name = d.Name;
	ClapTrap::Name = d.Name + "_clap_name";
	this->HitPoints = d.HitPoints;
	this->EnergyPoints = d.EnergyPoints;
	this->Damage = d.Damage;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor DiamondTrap called\n";
}


void DiamondTrap::attack(std::string n)
{
	ScavTrap::attack(n);
}

void DiamondTrap::displayDiamond()
{
	std::cout << "Name : " << Name << " HitPoints : " << HitPoints << " EnergyPoints : " << EnergyPoints << " Damage : " << Damage << std::endl;
}

void DiamondTrap::whoAmi()
{
	std::cout << "name " << Name << " name de claptrap "<< ClapTrap::Name  <<std::endl;
}