#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
	std::string type;

public:
	Weapon(const std::string &str);
	~Weapon();

	void setType(const std::string &str);
	const std::string& getType();
};

#endif
