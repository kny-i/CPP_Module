#include "ScavTrap.hpp"

int	main()
{
	ScavTrap dog("dog");
	dog.printInfo();
	dog.attack("cat");
	dog.takeDamage(2);
	dog.beRepaired(3);
	dog.attack("cat");
/*		for (int i = 0; i < 100; i++)
	{
		dog.attack("cat");
	}*/
	dog.printInfo();
	dog.takeDamage(101);
	dog.printInfo();
}
