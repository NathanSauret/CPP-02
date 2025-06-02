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
	
		// Operators
		Fixed	&operator=( const Fixed &src );
		bool	operator<( Fixed fixed ) const;
		bool	operator>( Fixed fixed ) const;
		bool	operator<=( Fixed fixed ) const;
		bool	operator>=( Fixed fixed ) const;
		bool	operator==( Fixed fixed ) const;
		bool	operator!=( Fixed fixed ) const;
		float	operator+( Fixed fixed ) const;
		float	operator-( Fixed fixed ) const;
		float	operator*( Fixed fixed ) const;
		float	operator/( Fixed fixed ) const;
		Fixed	operator++();
		Fixed	operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);

		// Class member functions
		int			getRawBits( void ) const;
		void		setRawBits( int const raw );
		float		toFloat( void ) const;
		int			toInt( void ) const;
		static Fixed		&min( Fixed &fixed1, Fixed &fixed2 );
		static const Fixed	&min( const Fixed &fixed1, const Fixed &fixed2 );
		static Fixed		&max( Fixed &fixed1, Fixed &fixed2 );
		static const Fixed	&max( const Fixed &fixed1, const Fixed &fixed2 );
};

std::ostream	&operator<<(std::ostream &ostream, Fixed const &fixed);

#endif