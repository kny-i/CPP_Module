#include "Fixed.hpp"

Fixed::Fixed() : raw(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}


Fixed::Fixed(const int input)
{
	std::cout << "Int constructor called " << std::endl;
	this->raw = input << this->point;
}

Fixed::Fixed(const float input)
{
	std::cout << "Float constructor called" << std::endl;
	this->raw = (int)roundf(input * (1 << this->point));
}

Fixed &Fixed::operator=(Fixed const &other)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &other)
	{
		this->raw = other.getRawBits();
	}
	return *this;
}

float 	Fixed::toFloat(void) const
{
	return ((float)this->raw / (float)(1 << this->point));
}

int Fixed::toInt(void) const
{
	return (this->raw >> this->point);
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member functioon called" << std::endl;
	return this->raw;
}

void Fixed::setRawBits(const int raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->raw = raw;
}

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}
