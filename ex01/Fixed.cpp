#include "Fixed.hpp"

const int Fixed::_nBits = 8;

// default constructor
Fixed::Fixed(): _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

// constructor that copy
Fixed::Fixed( const Fixed &toCopy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = toCopy;
}

// constructor that takes an int
Fixed::Fixed( const int i )
{
	std::cout << "Int constructor called" << std::endl;
	_value = i << _nBits;
}

// constructor that takes a float
Fixed::Fixed( const float f )
{
	std::cout << "Float constructor called" << std::endl;
	_value = roundf(f * (1 << _nBits)); // ex: 1 << 8 = 2^8 = 256
}

// destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// Overloaded operator '='
Fixed	&Fixed::operator=( const Fixed &src )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		_value = src.getRawBits();

	return *this;
}

// Overload operator '<<'
std::ostream	&operator<<(std::ostream &ostream, Fixed const &fixed)
{
	ostream << fixed.toFloat();
	return (ostream);
}

// get the raw bits of a Fixed
int	Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return ( _value );
}

// set the raw bits of a Fixed
void	Fixed::setRawBits( int const raw )
{
	// std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

float	Fixed::toFloat( void ) const
{
	return ((float)_value / (float)(1 << _nBits)); // ex: 1 << 8 = 2^8 = 256
}

int		Fixed::toInt( void ) const
{
	return _value >> _nBits;
}

