#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
private:
	/* data */
public:
	FragTrap(/* args */);
	FragTrap(std::string n);
	FragTrap(FragTrap const &c);
	FragTrap&operator=(FragTrap const &c);
	~FragTrap();
	void highFivesGuys(void);
};

#endif
