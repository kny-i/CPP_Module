#include "HumanB.hpp"

HumanB::HumanB(const std::string &str) : name(str), weapon(NULL)
{
	std::cout << "HumanB constructor callled" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB destructor callled" << std::endl;
}

void HumanB::attack()
{
	if (weapon)
	{
		std::cout << name << " attacks with his ";
		std::cout << weapon->getType();
	}
	else
		std::cout << name << " attacks without any weapons";
	std::cout << std::endl;
}

void HumanB::setWeapon(Weapon& str)
{
	weapon = &str;
}
