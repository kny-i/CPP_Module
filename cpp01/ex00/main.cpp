#include "Zombie.hpp"

int main()
{
	Zombie *zombie = newZombie("newZombie");
	zombie->announce();
	randomChump("randamZombie");
	delete zombie;
}
