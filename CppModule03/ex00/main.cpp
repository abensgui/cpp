#include "ClapTrap.hpp"

int main()
{
	ClapTrap p1("ayoub");
	ClapTrap p2("ayoub1");

	p1.diplay();
	p2.diplay();
	p1.attack(p2.getName());
	p2.takeDamage(10);
	p1.diplay();
	p2.diplay();
	p2.beRepaired(10);
	p2.diplay();

}