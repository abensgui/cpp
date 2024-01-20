
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP


#include <iostream>
#include <string>

class Zombie
{
private:
    std::string	Name;
public:
	Zombie();
	std::string getName(void);
	void setName(std::string n);
	Zombie(std::string name);
	~Zombie();
	void announce( void );
};
Zombie* zombieHorde( int N, std::string name );

#endif