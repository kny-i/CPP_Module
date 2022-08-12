#ifndef Harl_HPP
#define Harl_HPP

#include <iostream>
#include <string>

class Harl
{
private:
	void undefined( void );
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	void (Harl::*complains[5])( void );

public:
	Harl();
	~Harl();
	void complain( std::string level );

};

#endif
