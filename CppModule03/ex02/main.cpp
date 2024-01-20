#include "FragTrap.hpp"
int main()
{
    FragTrap p1("ayoub");
    FragTrap p2("bot");
    std::cout << "\n-----------------------------------\n"; 
    p1.diplay();
    p2.diplay();
    p2.attack(p1.getName());
    p2.diplay();
    p1.takeDamage(5);
    p1.diplay();
    p1.beRepaired(10);
    p1.diplay();

    p1.highFivesGuys();
    p2.highFivesGuys();
    std::cout << "\n-----------------------------------\n"; 

}