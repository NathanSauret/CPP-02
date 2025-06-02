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

// destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// Overloaded Operator '='
Fixed	&Fixed::operator=( const Fixed &src )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &src)
		_value = src.getRawBits();

	return *this;
}

// get the raw bits of a Fixed
int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return ( _value );
}

// set the raw bits of a Fixed
void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}
