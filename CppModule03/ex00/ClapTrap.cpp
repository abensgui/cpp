#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called\n";
	this->HitPoints = 10;
	this->EnergyPoints = 10;
	this->Damage = 0;
}

ClapTrap::ClapTrap(std::string n)
{
	std::cout << "parameter constructor called\n";
	Name = n;
	this->HitPoints = 10;
	this->EnergyPoints = 10;
	this->Damage = 0;
}

ClapTrap::ClapTrap(ClapTrap const &c)
{
	std::cout << "Copy constructor called\n";
	this->Name = c.Name;
	this->HitPoints = c.HitPoints;
	this->EnergyPoints = c.EnergyPoints;
	this->Damage = c.Damage;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &c)
{
	std::cout << "Copy assignment operator called\n";
	this->Name = c.Name;
	this->HitPoints = c.HitPoints;
	this->EnergyPoints = c.EnergyPoints;
	this->Damage = c.Damage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called\n";
}

void ClapTrap::attack(const std::string &target)
{
	if(EnergyPoints > 0 && HitPoints > 0)
	{
		EnergyPoints--;
		std::cout <<  "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->Damage << " points of damage!\n";
	}
	else if(EnergyPoints <= 0)
		std::cout << "EnergyPoints is 0\n";
	else
		std::cout << this->Name << " is die\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(this->HitPoints <= amount)
	{
		this->HitPoints = 0;
		std::cout << this->Name << " is die\n";
	}
	else
	{
		std::cout << "take damage " << this->Name << std::endl;
		this->HitPoints -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->EnergyPoints > 0 && HitPoints > 0)
	{	
		std::cout << "beRepaired " << this->Name << std::endl;
		this->EnergyPoints--;
		this->HitPoints += amount;
	}
	else if(EnergyPoints <= 0)
		std::cout << "EnergyPoints is 0\n";
	else
		std::cout << this->Name << " is die\n";
}
void ClapTrap::diplay()
{
	std::cout << "Name : " << Name << " HitPoints : " << HitPoints << " EnergyPoints : " << EnergyPoints << " Damage : " << Damage << std::endl;
}
std::string ClapTrap::getName() const
{
    return Name;
}

unsigned int ClapTrap::getHitPoints() const
{
    return HitPoints;
}

unsigned int ClapTrap::getEnergyPoints() const
{
    return EnergyPoints;
}

unsigned int ClapTrap::getDamage() const
{
    return Damage;
}
