#ifndef FIXEX_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{	
	private:
		int					_value;
		static const int	_nBits;

	public:
		Fixed();
		Fixed( const Fixed &toCopy );
		~Fixed();
	
		Fixed	&operator=( const Fixed &src );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif