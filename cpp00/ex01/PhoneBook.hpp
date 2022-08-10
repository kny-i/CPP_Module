#ifndef INCLUDE_GUARD_PHONEBOOK_HPP
#define INCLUDE_GUARD_PHONEBOOK_HPP

#include "Contact.hpp"
#include <iomanip>

const int MAX_CONTACTS = 8;
const int COLUM_WIDTH = 10;

class PhoneBook {
private:
	Contact contacts[MAX_CONTACTS];
	int index_head;
public:

	PhoneBook() : index_head(0) {}
	void init();
	void add();
	void search();
	std::string getStr(const std::string &prompt);
	void putOneline(int index);
	void putColumns();
	void putIndexinfo(int i);
};

#endif
