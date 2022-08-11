#include "Weapon.hpp"

Weapon::Weapon(const std::string &str) : type(str)
{
	std::cout << "Weapon constructor called" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon destructor called" << std::endl;
}

void Weapon::setType(const std::string &str)
{
	type = str;
}

const std::string& Weapon::getType()
{
	return (type);
}
