#ifndef FIXEX_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{	
	private:
		int					_value;
		static const int	_nBits;

	public:
		Fixed();
		Fixed( const Fixed &toCopy );
		Fixed( const int i );
		Fixed( const float f );
		~Fixed();
	
		Fixed			&operator=( const Fixed &src );
		int				getRawBits( void ) const;
		void			setRawBits( int const raw );
		float			toFloat( void ) const;
		int				toInt( void ) const;
};

std::ostream	&operator<<(std::ostream &ostream, Fixed const &fixed);

#endif