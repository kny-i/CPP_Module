#include <ClapTrap.hpp>

const std::string &ClapTrap::getName() const { return name_; }
unsigned int ClapTrap::getHitPoints() const { return hitPoint_; }
unsigned int ClapTrap::getEnergyPoint() const { return energyPoint_; }
unsigned int ClapTrap::getAttackDamage() const { return attackDamage_; }