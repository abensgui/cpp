#include "PhoneBook.hpp"

void PhoneBook::setContact(Contact c)
{
	contact[numcontact % 8] = c;
	numcontact++;
}

Contact PhoneBook::getContact(int i)
{
	return contact[i];
}

void PhoneBook::setNumc(int n)
{
	numcontact = n;
}

int PhoneBook::getNumc()
{
	if(numcontact <= 8)
		return (numcontact);
	else
		return (8);
}
