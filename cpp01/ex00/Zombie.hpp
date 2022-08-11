#ifndef INCLUDE_GUARD_ZOMBIE_HPP
#define INCLUDE_GUARD_ZOMBIE_HPP

#include <iostream>
#include <sys/wait.h>

class Zombie
{
private:
	std::string name;

public:
	Zombie(std::string name);
	~Zombie();
	void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
