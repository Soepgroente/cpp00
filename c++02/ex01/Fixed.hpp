#include <iostream>

#pragma once

class	Fixed
{
	private:
		int					value;
		static const int	fractional_bits = 8;

	public:
	
	int			getRawBits( void ) const;
	void		setRawBits( int const raw );
	void		operator=(const Fixed& original);
	// void		operator<<();
	int	toInt( void ) const;
	float toFloat( void ) const;
	Fixed();
	Fixed(const int val);
	Fixed(const float val);
	Fixed(const Fixed& original);
	~Fixed();
};
