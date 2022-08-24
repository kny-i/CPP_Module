#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	/*std::cout << "----clap trap test----" << std::endl;
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

					std::cout << "----scav trap test----" << std::endl;
	ScavTrap dog("dog");
	dog.printInfo();
	dog.attack("cat");
	dog.takeDamage(2);
	dog.beRepaired(3);
	dog.attack("cat");
	dog.guardGate();
	for (int i = 0; i < 100; i++)
	{
		dog.attack("cat");
	}
	dog.printInfo();
	dog.takeDamage(101);
	dog.printInfo();
*/
	FragTrap fragTrap("test");

	fragTrap.attack("target");
	for (size_t i = 0; i < 100; i++)
	{
		fragTrap.attack("hoge");
	}
	fragTrap.takeDamage(10);
	fragTrap.beRepaired(40);
	fragTrap.highFiveGuys();
}
