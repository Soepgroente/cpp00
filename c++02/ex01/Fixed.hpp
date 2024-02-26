#include <iostream>

#pragma once

class	Fixed
{
	private:
		int					value;
		static const int	fractional_bits = 8;

	public:
	
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	int		toInt(void) const;
	float	toFloat(void) const;
	void	operator=(const Fixed& original);
	Fixed();
	Fixed(const int val);
	Fixed(const float val);
	Fixed(const Fixed& original);
	~Fixed();
};

std::ostream&	operator<<(std::ostream& stream, const Fixed& original);
