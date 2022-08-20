# ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int raw;
	static const int point = 8;

public:
	Fixed();
	~Fixed();
	Fixed(Fixed const &other);
	Fixed(const int input);
	Fixed(const float input);

	Fixed &operator=(Fixed const &other);

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat(void)const;
	int toInt(void)const;
};

#endif
