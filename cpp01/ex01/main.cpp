#include "Zombie.hpp"

int main(void) {
	int zonbieNum;

	std::cout << "input ZombieNum > ";
	std::cin >> zonbieNum;

	Zombie* zombiePtr = zombieHorde(zonbieNum, "test");

	for (int i = 0; i < zonbieNum; i++)
		zombiePtr[i].announce();
	delete[] zombiePtr;
}
