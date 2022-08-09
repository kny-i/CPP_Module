#include "PhoneBook.hpp"
#include <string>

PhoneBook::PhoneBook() : index_head(0) {}

PhoneBook::~PhoneBook() {}

void PhoneBook::add()
{
	std::cout  << index_head << std::endl;
}

void PhoneBook::search()
{
	std::cout  << "test" << std::endl;
}

void PhoneBook::init()
{
	PhoneBook phoneBook;
	std::string str;
	try
	{
		while (1)
		{
			std::cout << "----------------------------------------" << std::endl;
			std::cout << "type the commands like ADD, SEARCH, EXIT" << std::endl;
			std::cout << "----------------------------------------" << std::endl;
			if (!std::getline(std::cin, str))
				break ;
			if (str == "ADD") {
				phoneBook.add();
				continue ;
			}
			else if (str == "SEARCH") {
				phoneBook.search();
				continue ;
			}
			else if (str == "EXIT") {
				break ;
			}
		}
	}
	catch(std::exception& e)
	{
		std::cerr << "Error" << std::endl;
	}
}