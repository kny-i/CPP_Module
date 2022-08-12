#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Harl constructor called" << std::endl;
	complains[0] = &Harl::undefined;
	complains[1] = &Harl::debug;
	complains[2] = &Harl::info;
	complains[3] = &Harl::warning;
	complains[4] = &Harl::error;
}

Harl::~Harl()
{
	std::cout << "Harl destructor called" << std::endl;
}

void Harl::undefined( void )
{
	std::cout << "I have no idea like what to say ..."<< std::endl;
}

void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
	int index = (level == "DEBUG") + (level == "INFO") * 2 +
				(level == "WARNING") * 3 + (level == "ERROR") * 4;

	(this->*complains[index])();
}
