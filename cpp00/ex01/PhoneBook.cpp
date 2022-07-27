#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : headIndex(0), insertIndex(0) {
	std::cout << "[PhoneBook] default constructor called." << std::endl;
}

PhoneBook::~PhoneBook() {
	std::cout << "[PhoneBook] destructor called." << std::endl;
}