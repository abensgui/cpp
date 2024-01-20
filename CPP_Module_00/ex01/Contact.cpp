#include "Contact.hpp"

void Contact::setFirstName(std::string fn)
{
	FirstName = fn;
}

std::string Contact::getFirstName()
{
	return  FirstName;
}

////////////////////////////////////////////

void Contact::setLastName(std::string ln)
{
	LastName = ln;
}

std::string Contact::getLastName()
{
	return LastName;
}

////////////////////////////////////////////

void Contact::setNikename(std::string nn)
{
	Nikename = nn;
}

std::string Contact::getNikename()
{
	return Nikename;
}

////////////////////////////////////////////

void Contact::setphoneNumber(std::string pn)
{
	PhoneNumber = pn;
}

std::string Contact::getphoneNumber()
{
	return  PhoneNumber;
}

void Contact::setDarkestSecret(std::string ds)
{
	DarkestSecret = ds;
}

std::string Contact::getDarkestSecret()
{
	return DarkestSecret;
}
