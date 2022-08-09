#include "PhoneBook.hpp"
#include <string>

Phonebook::Phonebook() : index_head(0) {}

Phonebook::~Phonebook() {}

void Phonebook::init()
{
	std::cout << "Hello" << std::endl;
	std::cout << index_head << std::endl;
}