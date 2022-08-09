#include "PhoneBook.hpp"
#include <string>

PhoneBook::PhoneBook() : index_head(0) {}

PhoneBook::~PhoneBook() {}

static bool isSpace(std::string str)
{
	size_t i;
	for (i = 0; i < str.size(); i++)
	{
		if  (!std::isspace(str[i]))
			return (false);
	}
	return (true);
}

std::string PhoneBook::getstr(std::string prompt)
{
	std::string str;

	while (1)
	{
		std::cout << std::setw(prompt.size()) << prompt << " -> ";
		if (!std::getline(std::cin, str))
			throw std::exception();
		if (str.size() != 0 && !isSpace(str))
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
	contacts[index_head].setFirstName(getstr("FirstName"));
	contacts[index_head].setLastName(getstr("LastName"));
	contacts[index_head].setNickName(getstr("NickName"));
	while (1)
	{
		phone_number = getstr("PhoneNumber");
		if (isNumber(phone_number))
			break ;
		else
			std::cout << "  Error: Please input digits " <<  std::endl;
	}
	contacts[index_head].setPhoneNumber(phone_number);
	contacts[index_head].setDarkestSecret(getstr("DarkestSecret"));
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
			str = getstr("");
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