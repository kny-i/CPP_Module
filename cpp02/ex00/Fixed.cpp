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

Fixed &Fixed::operator=(Fixed const &other)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &other)
	{
		this->raw = other.getRawBits();
	}
	return *this;
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
