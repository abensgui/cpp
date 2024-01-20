#include "ScavTrap.hpp"
#include <iostream>
int main()
{
    ScavTrap p1("ayoub");
    ScavTrap p2("bot");
    std::cout << "\n----------------------------\n";
    p1.diplay();
    p2.diplay();
    p2.attack(p1.getName());
    p2.diplay();
    p1.takeDamage(5);
    p1.diplay();
    p1.beRepaired(10);
    p1.diplay();
    p1.guardGate();
    p2.guardGate();
    std::cout << "\n----------------------------\n";
}