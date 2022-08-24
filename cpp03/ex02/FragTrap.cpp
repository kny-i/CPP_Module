#include "FragTrap.hpp"

// Constructors
FragTrap::FragTrap(): ClapTrap()
{
	this->name = "flag";
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
	std::cerr << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy)
{
	std::cerr << "FragTrap Copy Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string str): ClapTrap(str)
{
	this->hitPoint = 100;
	this->energyPoint = 100;
	this->attackDamage = 30;
	std::cerr << "FragTrap Constructor for the name " << this->name << " called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cerr << "FragTrap Deconstructor for " << this->name << " called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	if (this != &other)
	{
		std::cout << "FragTrap Assignation operator called" << std::endl;
		this->name = other.name;
		this->hitPoint = other.hitPoint;
		this->energyPoint = other.energyPoint;
		this->attackDamage = other.attackDamage;
	}
	return *this;
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap " << this->name << ": Let's high five!!" << std::endl;
}
