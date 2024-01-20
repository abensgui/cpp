#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP


#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contact[8];
		int numcontact;
	public:
		void setContact(Contact c);
		Contact getContact(int i); 
		void setNumc(int n);
		int getNumc();
};
#endif
