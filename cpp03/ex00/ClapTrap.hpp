
#ifndef CPP_CLAPTRAP_HPP
#define CPP_CLAPTRAP_HPP
#include <iostream>
#include <string>

class ClapTrap {
public:
	ClapTrap();
	ClapTrap(const std::string &name);
	~ClapTrap();
	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &other);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	const std::string &getName() const;
	unsigned int getHitPoints() const;
	unsigned int getEnergyPoint() const;
	unsigned int getAttackDamage() const;
	void printInfo();

private:
	std::string name;

	unsigned int hitPoint;
	unsigned int energyPoint;
	unsigned int attackDamage;

};

#endif
