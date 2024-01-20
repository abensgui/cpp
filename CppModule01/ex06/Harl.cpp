#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n"; 
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void complain(std::string level)
{
	Harl obj;
	int i;
	i = 0;
	void  (Harl::*ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while(i < 4)
	{
		if(level == levels[i])
			break;
		i++;
	}
	switch (i) {
		case 0:
			std::cout << "[DEBUG]\n";
			(obj.*ptr[i])();
		case 1:
			std::cout << "[INFO]\n";
			(obj.*ptr[i])();
 	 	case 2:
			std::cout << "[WARNING]\n";
			(obj.*ptr[i])();
		case 3:
			std::cout << "[ERROR]\n";
			(obj.*ptr[i])();
			break;
		default:
    		std::cout << "[ Probably complaining about insignificant problems ]";
	}
}
