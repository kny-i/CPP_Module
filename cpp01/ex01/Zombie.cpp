#include "Zombie.hpp"

Zombie::Zombie(const std::string &str): name(str)
{
	std::cout << "arg constructor called " << std::endl;
}

Zombie::Zombie(): name("default")
{
	std::cout << "default constructor called " << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << " is dead" << std::endl;
}
void Zombie::setName(const std::string &str)
{
	name = str;
}
void Zombie::announce()
{
	std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
