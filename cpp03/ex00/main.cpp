#include "ClapTrap.hpp"

int	main()
{
	ClapTrap dog("dog");
	dog.printInfo();
	dog.attack("cat");
	dog.takeDamage(2);
	dog.beRepaired(3);
	dog.attack("cat");
	dog.attack("cat");
	dog.attack("cat");
	dog.attack("cat");
	dog.attack("cat");
	dog.attack("cat");
	dog.attack("cat");
	dog.attack("cat");
	dog.attack("cat");
	dog.printInfo();
	dog.takeDamage(100);
	dog.printInfo();
}
