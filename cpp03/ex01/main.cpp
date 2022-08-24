#include "ScavTrap.hpp"

int	main()
{
	std::cout << "----clap trap test----" << std::endl;
	ClapTrap fox("fox");
	fox.printInfo();
	fox.attack("cat");
	fox.takeDamage(2);
	fox.beRepaired(3);
	fox.attack("cat");
	fox.attack("cat");
	fox.attack("cat");
	fox.attack("cat");
	fox.attack("cat");
	fox.attack("cat");
	fox.attack("cat");
	fox.attack("cat");
	fox.attack("cat");
	fox.printInfo();
	fox.takeDamage(100);
	fox.printInfo();
	ScavTrap dog("dog");
	dog.printInfo();
	dog.attack("cat");
	dog.takeDamage(2);
	dog.beRepaired(3);
	dog.attack("cat");

	std::cout << "----scav trap test----" << std::endl;
/*		for (int i = 0; i < 100; i++)
	{
		dog.attack("cat");
	}*/
	dog.printInfo();
	dog.takeDamage(101);
	dog.printInfo();
}
