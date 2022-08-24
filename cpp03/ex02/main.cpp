#include "FragTrap.hpp"

int main() {
	FragTrap fragTrap("test");

	fragTrap.attack("target");
	fragTrap.takeDamage(10);
	fragTrap.beRepaired(40);
	fragTrap.highFiveGuys();
}
