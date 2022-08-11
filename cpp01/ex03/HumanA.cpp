#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon& weapon) : name(name), weapon(weapon)
{
	std::cout << "HumanA constructor called" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA destructor called" << std::endl;
}

void HumanA::attack() {
	std::cout << name << " attacks with his " << weapon.getType()<< std::endl;
}
