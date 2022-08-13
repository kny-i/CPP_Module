#include "PhoneBook.hpp"
#include <string>

PhoneBook::PhoneBook() : index_head(0)
{
	std::cout << "constructor called " << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "destructor called " << std::endl;
}

static bool isSpace(std::string str)
{
	for (size_t i = 0; i < str.size(); i++)
	{
		if  (!std::isspace(str[i]))
			return (false);
	}
	return (true);
}

std::string PhoneBook::getStr(const std::string &prompt)
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

static bool is_number(const std::string &str)
{
	for (size_t i = 0; i < str.size(); i++)
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
	contacts[index_head].setFirstName(getStr("FirstName"));
	contacts[index_head].setLastName(getStr("LastName"));
	contacts[index_head].setNickname(getStr("NickName"));
	while (1)
	{
		phone_number = getStr("PhoneNumber");
		if (is_number(phone_number))
			break ;
		else
			std::cerr << "  Error: Please input digits " <<  std::endl;
	}
	contacts[index_head].setPhoneNumber(phone_number);
	contacts[index_head].setDarkestSecret(getStr("DarkestSecret"));
	contacts[index_head].done();
	index_head++;
}

static void putHeader()
{
	std::cout << std::endl;
	std::cout << "     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
}

static std::string convert(std::string str)
{
	if (str.size() > COLUM_WIDTH)
		return (str.replace(9, 1, ".").substr(0, COLUM_WIDTH));
	return (str);
}

void PhoneBook::putOneline(int index)
{

	std::cout << std::setw(COLUM_WIDTH) << index << "|" ;
	std::cout << std::setw(COLUM_WIDTH) << convert(contacts[index].getFirstName()) << "|" ;
	std::cout << std::setw(COLUM_WIDTH) << convert(contacts[index].getLastName()) << "|" ;
	std::cout << std::setw(COLUM_WIDTH) << convert(contacts[index].getNickname()) << "|" << std::endl;
}

void PhoneBook::putColumns()
{
	putHeader();
	for (size_t i = 0; i < MAX_CONTACTS; i++)
	{
		putOneline(i);
	}
	std::cout << std::endl;
}

static bool is_inrange(const std::string str)
{
	int i;

	i = str[0] - '0';
	if (0 <= i && i < MAX_CONTACTS)
		return (true);
	else
		return (false);
}

void PhoneBook::putIndexinfo(int i)
{
	std::cout << "First Name: " << contacts[i].getFirstName() << std::endl;
	std::cout << "Last Name: " << contacts[i].getLastName() << std::endl;
	std::cout << "Nickname: " << contacts[i].getNickname() << std::endl;
	std::cout << "Phone number: " << contacts[i].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contacts[i].getDarkestSecret() << std::endl;
}

void PhoneBook::search()
{
	std::string str;
	int 		i;
	putColumns();
	while (1)
	{
		str = getStr("index number");
		if (str.size() == 1 && is_number(str) == 1 && is_inrange(str) == 1)
		{
			i = str[0] - '0';
			if (contacts[i].checkDone() == true)
			{
				putIndexinfo(i);
				return ;
			}
			else
			{
				std::cerr << "No such a index info" << std::endl;
				continue;
			}
		}
		std::cerr << "put the correct index like 0 to 8" << std::endl;
	}

}

void PhoneBook::init()
{
	std::string str;

	try
	{
		while (1)
		{
			std::cout << "----------------------------------------" << std::endl;
			std::cout << "type the commands like ADD, SEARCH, EXIT" << std::endl;
			std::cout << "----------------------------------------" << std::endl;
			str = getStr("");
			if (str == "ADD")
			{
				add();
				continue ;
			}
			else if (str == "SEARCH")
			{
				search();
				continue ;
			}
			else if (str == "EXIT")
			{
				break ;
			}
		}
	}
	catch(std::exception& e)
	{
		std::cerr << "Error" << std::endl;
	}
}
