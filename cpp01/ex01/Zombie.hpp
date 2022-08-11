#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string name;

public:
	Zombie();
	Zombie(const std::string &str);
	~Zombie();
	void setName(const std::string &str);
	void announce( void );
};

Zombie* zombieHorde(int N, const std::string &str);

#endif
