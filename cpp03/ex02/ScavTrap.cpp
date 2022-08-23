#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cerr << "ScavTrap default constructor called" << std::endl;
	name = "scav";
	hitPoint = 100;
	energyPoint = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string &str)
{
	std::cerr << "ScavTrap " << name << " constructor called" << std::endl;
	name = str;
	hitPoint = 100;
	energyPoint = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	std::cerr << "ScavTrap copy constructor called" << std::endl;
	*this = other;
}

ScavTrap::~ScavTrap()
{
	std::cerr << "ScavTrap " << name << " destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) {
	if (this != &other) {
		name = other.getName();
		hitPoint = other.getHitPoints();
		energyPoint = other.getEnergyPoint();
		attackDamage = other.getAttackDamage();
	}
	return *this;
}

void ScavTrap::attack(std::string const &target)
{
	if (energyPoint <= 0 || hitPoint <= 0) {
		std::cout << "ClapTrap " << name << " lack of energyPoint or hitPoint." << std::endl;
		return;
	}
	std::cout
			<< "ScavTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	energyPoint--;
}

void ScavTrap::guardGate()
{
	std::cout
			<< "ScavTrap " << name << " is now in Gate keeper mode" << std::endl;
}
