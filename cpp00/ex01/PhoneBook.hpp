#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include "Contact.hpp"
#include <libc.h>

class PhoneBook{

private:
	Contact contactList[8];
	int headIndex;
	int insertIndex;
	std::string stringConverter(std::string string);

public:
	PhoneBook();
	~PhoneBook();
	void executeAdd();
	void executeSearch();
	void executeShowList();
};

#endif