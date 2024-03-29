#include <iostream>
#include <iomanip>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed()
{
	value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& original)
{
	this->value = original.value;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int val)
{
	std::cout << "Int constructor called" << std::endl;
	value = val << fractional_bits;
}

Fixed::Fixed(const float val)
{
	value = (int)std::roundf(val * (1 << fractional_bits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::toInt(void) const
{
	return (this->value >> fractional_bits);
}

float Fixed::toFloat(void) const
{
	int		whole_num;
	int 	partial_num;
	float	scaled_float;
	float	result;

	whole_num = getRawBits() >> fractional_bits;
	partial_num = value & ((1 << fractional_bits) - 1);
	scaled_float = static_cast<float>(partial_num) / (1 << fractional_bits);
	result = (float)whole_num + scaled_float;
	return (result);
}

int Fixed::getRawBits(void) const
{
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

void	Fixed::operator=(const Fixed& original)
{
	this->value = original.getRawBits();
}

std::ostream&	operator<<(std::ostream& stream, const Fixed& original)
{
	stream << original.toFloat();
	return (stream);
}