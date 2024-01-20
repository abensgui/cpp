#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iomanip>
#include <cstdlib>

int ft_stoi(std::string str)
{
	const char *s = str.c_str();
	return(atoi(s));
}

std::string ft_getline(std::string str)
{
	std::string line;
	std::cout << str;
	std::getline(std::cin, line);
	if(!std::cin)
		std::exit(0);
	return (line);
}

int main()
{
	PhoneBook p;
	int i;
	i = 0;
	p.setNumc(0);
	while(1)
	{
		std::string line;
		line = ft_getline("enter command :");
		if(line == "ADD")
		{
			Contact c;
			c.setFirstName(ft_getline("setFirstName :"));
			c.setLastName(ft_getline("setLastName :"));
			c.setNikename(ft_getline("setNikename :"));
			c.setphoneNumber(ft_getline("setPhonenumber :"));
			c.setDarkestSecret(ft_getline("setDarkestSecret :"));
			p.setContact(c);
		}
		else if("SEARCH" == line)
		{
			i = 0;
			std::cout << "     Index| FirstName|  LastName|  NikeName\n";
			std::cout << "-------------------------------------------\n" ;
			while(i < p.getNumc())
			{
				std::cout<< std::setw (10) << i + 1 << "|";
				if(p.getContact(i).getFirstName().length() > 10)
					std::cout <<p.getContact(i).getFirstName().substr(0,9) << ".|";
				else
					std::cout << std::setw (10) <<p.getContact(i).getFirstName() << "|";
				if(p.getContact(i).getLastName().length() > 10)
					std::cout <<p.getContact(i).getLastName().substr(0,9) << ".|";
				else
					std::cout << std::setw (10) <<p.getContact(i).getLastName() << "|";
				if(p.getContact(i).getNikename().length() > 10)
					std::cout <<p.getContact(i).getNikename().substr(0,9) << ".|";
				else
					std::cout << std::setw (10) <<p.getContact(i).getNikename() << "|\n";
				i++;
			}
			std::cout << "-------------------------------------------\n" ;
			line = ft_getline("insert index : ");    
			while(ft_stoi(line) == 0 || ft_stoi(line) > p.getNumc())
			{
				if (p.getNumc() == 0)
				{
					std::cout << "there is no contact\n";
					break;
				}
				line = ft_getline("insert index : ");
			}
			if (p.getNumc() > 0)
			{
				std::cout << "first name : "<< p.getContact(ft_stoi(line) - 1).getFirstName() << "\n";
				std::cout << "last name : " << p.getContact(ft_stoi(line) - 1).getLastName() << "\n";
				std::cout << "Nikename : " << p.getContact(ft_stoi(line) - 1).getNikename() << "\n";
				std::cout << "phone number : " <<p.getContact(ft_stoi(line) - 1).getphoneNumber() << "\n";
				std::cout << "darkes secret : " << p.getContact(ft_stoi(line) - 1).getDarkestSecret() << "\n";
			}
		}
		else if("EXIT" == line)
			break;
	}
}
