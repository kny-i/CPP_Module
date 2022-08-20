#include "ClapTrap.hpp"

const std::string &ClapTrap::getName() const { return name; }
unsigned int ClapTrap::getHitPoints() const { return hitPoint; }
unsigned int ClapTrap::getEnergyPoint() const { return energyPoint; }
unsigned int ClapTrap::getAttackDamage() const { return attackDamage; }

ClapTrap::ClapTrap() :
		name("clap"),
		hitPoint(10),
		energyPoint(10),
		attackDamage(0)
{
	std::cerr << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) :
		name(name),
		hitPoint(10),
		energyPoint(10),
		attackDamage(0)
{
	std::cerr << "ClapTrap " << name << " constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cerr << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
	std::cerr << "ClapTrap copy constructor called" << std::endl;
	*this = rhs;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other) {
	if (this != &other) {
		name = other.getName();
		hitPoint = other.getHitPoints();
		energyPoint = other.getEnergyPoint();
		attackDamage = other.getAttackDamage();
	}
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (energyPoint <= 0 || hitPoint <= 0) {
		std::cout << "ClapTrap " << name << " lack of energyPoint or hitPoint." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	energyPoint--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoint <= 0) {
		std::cout << "ClapTrap " << name << " is dead" << std::endl;
		return ;
	}
	if (hitPoint <= amount) {
		hitPoint = 0;
		std::cout
				<< "ClapTrap " << name << " is dead!!" << std::endl << "[GAME OVER]" << std::endl;
	} else {
		hitPoint = hitPoint - amount;
		std::cout
				<< "ClapTrap " << name << " taken " << amount << " points of damage. (" << hitPoint << "HP left)" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (energyPoint <= 0 || hitPoint <= 0) {
		std::cout << "ClapTrap " << name << " lack of energyPoint or hitPoint." << std::endl;
		return ;
	}
	hitPoint += amount;
	std::cout
			<< "ClapTrap " << name << " is repaired " << amount << " points. (" << hitPoint << "HP left)" << std::endl;
	energyPoint--;
}

void ClapTrap::printInfo()
{
	if (hitPoint <= 0) {
		std::cout << "ClapTrap " << name << " is dead" << std::endl;
		return ;
	}
	std::cout << "---------- printinfo ----------" << std::endl;
	std::cout << "Name: " << getName() << std::endl;
	std::cout << " [HP]: " << getHitPoints() << std::endl;
	std::cout << " [EP]: " << getEnergyPoint() << std::endl;
	std::cout << " [AD]: " << getAttackDamage() << std::endl;
}
