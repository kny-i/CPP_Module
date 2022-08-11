#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <sys/wait.h>

class Zombie
{
private:
	std::string name;

public:
	Zombie(const std::string &str);
	~Zombie();
	void announce(void);
};

Zombie* newZombie(const std::string &str);
void randomChump(const std::string &str);

#endif
