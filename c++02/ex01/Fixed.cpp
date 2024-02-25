#include <iostream>
#include <cstring>
#include "Fixed.hpp"

Fixed::Fixed()
{
	value = 0;
	std::cout << "Default constructor called" << std::endl;
}

/*	Memcpy works because the original doesn't have any allocated members	*/

Fixed::Fixed(const Fixed& original)
{
	std::memcpy(this, &original, sizeof(original));
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;
	value = val << fractional_bits;
}

Fixed::Fixed(const float val)
{
	setRawBits((int)val);
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::toInt(void) const
{
	std::cout << "toInt called" << std::endl;
	return (this->value >> 8);
}

float Fixed::toFloat(void) const
{
	std::cout << "toFloat called" << std::endl;
	return ((float)this->value / 256);
}

int Fixed::getRawBits( void ) const
{
	std::cout << "GetRawBits called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "SetRawBits called" << std::endl;
	this->value = raw;
}

void	Fixed::operator=(const Fixed& original)
{
	std::cout << "= operator called" << std::endl;
	this->value = original.getRawBits();
}

/* void	Fixed::operator<<()
{
	std::cout << "<< operator called" << std::endl;
} */