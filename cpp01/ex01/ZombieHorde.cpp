#include "Zombie.hpp"

Zombie* zombieHorde(int N, const std::string &str)
{
	Zombie* zombies = new Zombie[N];
	while (N--)
		zombies[N].setName(str);
	return (zombies);
}
