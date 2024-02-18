#include <iostream>
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
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

const int	Fixed::toInt(void)
{
	return (this->value >> 8);
}

const float Fixed::toFloat(void)
{

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
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = original.getRawBits();
}

void	Fixed::operator<<()
{
	std::cout << "Copy assignment operator called" << std::endl;
}