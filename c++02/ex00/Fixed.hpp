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
	void	operator=(const Fixed& original);

	Fixed();
	Fixed(const Fixed& original);
	~Fixed();
};
