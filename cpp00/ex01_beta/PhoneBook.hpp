#ifndef INCLUDE_GUARD_PHONEBOOK_HPP
#define INCLUDE_GUARD_PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>

const int MAX_CONTACTS = 8;
const int SUB_WIDTH = 16;
const int COLUM_WIDTH = 10;

class PhoneBook {
private:
	Contact contacts[8];
	int index_head;
public:
	PhoneBook();

	~PhoneBook();

	void init();
	void add();
	void search();
};

#endif
