#ifndef CPP_FLAGTRAP_HPP
#define CPP_FLAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
private:

public:
	FragTrap();
	FragTrap(const FragTrap &copy);
	FragTrap(std::string name);

	virtual ~FragTrap();

	FragTrap &operator=(const FragTrap &src);

	void highFiveGuys(void);
};

#endif
