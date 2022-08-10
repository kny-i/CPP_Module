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
	index_head++;
}

static void putHeader()
{
	std::cout << std::endl;
	std::cout << "Index|First Name| Last Name| Nickname " << std::endl;
	std::cout << "-----------------------------------------" << std::endl;
}

static std::string convert(std::string str)
{
	if (str.size() > 10)
		return (str.replace(9, 1, ".").substr(0, 10));
	return (str);
}

void PhoneBook::put_one_line(int index)
{

	std::cout << index << "|";
	std::cout << std::setw(COLUM_WIDTH) << convert(contacts[index].getFirstName()) << "|" ;
	std::cout << std::setw(COLUM_WIDTH) << convert(contacts[index].getLastName()) << "|" ;
	std::cout << std::setw(COLUM_WIDTH) << convert(contacts[index].getNickName()) << "|" << std::endl;
}

void PhoneBook::put_colums()
{
	putHeader();
	for (size_t i = 0; i < MAX_CONTACTS; i++)
	{
		put_one_line(i);
	}
	std::cout << std::endl;
}

static bool isInrange(std::string str)
{
	int i;

	i = str[0] - '0';
	if (0 <= i && i <= MAX_CONTACTS)
		return (true);
	else
		return (false);
}

void PhoneBook::put_index_info(int i)
{
	std::cout << "First Name: " << contacts[i].getFirstName() << std::endl;
	std::cout << "Last Name: " << contacts[i].getLastName() << std::endl;
	std::cout << "Nickname: " << contacts[i].getNickName() << std::endl;
	std::cout << "Phone number: " << contacts[i].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contacts[i].getDarkestSecret() << std::endl;
}

void PhoneBook::search()
{
	std::string str;
	int 		i;
	put_colums();
	while (1)
	{
		str = getstr("index number");
		if (str.size() == 1 && isNumber(str) == 1 && isInrange(str) == 1)
		{
			i = str[0] - '0';
			if (contacts[i].checkdone() == true)
			{
				put_index_info(i);
				return ;
			}
			else
			{
				std::cout << "No such a index info" << std::endl;
				continue;
			}
		}
		std::cout << "put the correct index like 0 to 8" << std::endl;
		std::cout << std::endl;
	}

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
				add();
				continue ;
			}
			else if (str == "SEARCH") {
				search();
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