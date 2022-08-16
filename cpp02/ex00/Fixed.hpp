#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int raw;
	static const int point= 8;

public:
	Fixed();
	~Fixed();
	Fixed(Fixed const &other);
	Fixed &operator=(Fixed const &other);

	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif
