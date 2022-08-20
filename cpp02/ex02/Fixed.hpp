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

	bool operator>(Fixed fixed)const;
	bool operator<(Fixed fixed)const;
	bool operator>=(Fixed fixed)const;
	bool operator<=(Fixed fixed)const;
	bool operator==(Fixed fixed)const;
	bool operator!=(Fixed fixed)const;

	float operator+(Fixed fixed)const;
	float operator-(Fixed fixed)const;
	float operator*(Fixed fixed)const;
	float operator/(Fixed fixed)const;

	Fixed operator++();
	Fixed operator--();

	Fixed operator++(int);
	Fixed operator--(int);


	static Fixed &min(Fixed &first, Fixed &second);
	static const Fixed &min(Fixed const &first, Fixed const &second);
	static Fixed &max(Fixed &first, Fixed &second);
	static const Fixed &max(Fixed const &first, const Fixed &second);

	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat(void)const;
	int toInt(void)const;
};

std::ostream &operator<<(std::ostream &o, Fixed const &fixed);
#endif
