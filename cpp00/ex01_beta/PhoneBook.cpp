#include "PhoneBook.hpp"
#include <string>

PhoneBook::PhoneBook() : index_head(0) {}

PhoneBook::~PhoneBook() {}

std::string PhoneBook::getstr()
{
	std::string str;

	while (1)
	{
		if (!std::getline(std::cin, str))
			throw std::exception();
		break;
	}
	return (str);
}

static bool isNumber(std::string str)
{
	size_t i;
	for (i = 0; i < str.size(); i++)
	{
		if  (!std::isdigit(str[i]))
			return (false);
	}
	return (true);
}

void PhoneBook::add()
{
	std::string phone_number;

	if (index_head == MAX_CONTACTS)
		index_head = 0;
	contacts[index_head].setFirstName(getstr());
	contacts[index_head].setLastName(getstr());
	contacts[index_head].setNickName(getstr());
	while (1)
	{
		phone_number = getstr();
		if (isNumber(phone_number))
			break ;
		else
			std::cout << "  Error: Please input digits " <<  std::endl;
	}
	contacts[index_head].setPhoneNumber(getstr());
	contacts[index_head].setDarkestSecret(getstr());
	contacts[index_head].done();
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