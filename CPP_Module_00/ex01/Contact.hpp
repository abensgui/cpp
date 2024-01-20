#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	private:
		std::string FirstName;
		std::string LastName;
		std::string Nikename;
		std::string PhoneNumber;
		std::string DarkestSecret;
	public:
		void setFirstName(std::string fn);
		std::string getFirstName();
		void setLastName(std::string ln);
		std::string getLastName();
		void setNikename(std::string nn);
		std::string getNikename();
		void setphoneNumber(std::string pn);
		std::string getphoneNumber();
		void setDarkestSecret(std::string ds);
		std::string getDarkestSecret();
};
#endif
