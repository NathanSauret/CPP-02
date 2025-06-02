#include "Fixed.hpp"

const int Fixed::_nBits = 8;

// default constructor
Fixed::Fixed(): _value(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

// constructor that copy
Fixed::Fixed( const Fixed &toCopy)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = toCopy;
}

// constructor that takes an int
Fixed::Fixed( const int i )
{
	// std::cout << "Int constructor called" << std::endl;
	_value = i << _nBits;
}

// constructor that takes a float
Fixed::Fixed( const float f )
{
	// std::cout << "Float constructor called" << std::endl;
	_value = roundf(f * (1 << _nBits)); // ex: 1 << 8 = 2^8 = 256
}

// destructor
Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

// Overloaded operator '='
Fixed	&Fixed::operator=( const Fixed &src )
{
	// std::cout << "Copy assignment operator called" << std::endl;
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

// Overload operator '<'
bool	Fixed::operator<(Fixed fixed) const
{
	return ( this->toFloat() < fixed.toFloat() );
}

// Overload operator '>'
bool	Fixed::operator>(Fixed fixed) const
{
	return ( this->toFloat() > fixed.toFloat() );
}

// Overload operator '<='
bool	Fixed::operator<=(Fixed fixed) const
{
	return ( this->toFloat() <= fixed.toFloat() );
}

// Overload operator '>='
bool	Fixed::operator>=(Fixed fixed) const
{
	return ( this->toFloat() >= fixed.toFloat() );
}

// Overload operator '=='
bool	Fixed::operator==(Fixed fixed) const
{
	return ( this->toFloat() == fixed.toFloat() );
}

// Overload operator '!='
bool	Fixed::operator!=(Fixed fixed) const
{
	return ( this->toFloat() != fixed.toFloat() );
}

// Overload operator '+'
float	Fixed::operator+(Fixed fixed) const
{
	return ( this->toFloat() + fixed.toFloat() );
}

// Overload operator '-'
float	Fixed::operator-(Fixed fixed) const
{
	return ( this->toFloat() - fixed.toFloat() );
}

// Overload operator '*'
float	Fixed::operator*(Fixed fixed) const
{
	return ( this->toFloat() * fixed.toFloat() );
}

// Overload operator '/'
float	Fixed::operator/(Fixed fixed) const
{
	return ( this->toFloat() / fixed.toFloat() );
}

// Overload operator '++fixed'
Fixed	Fixed::operator++()
{
	_value++;
	return (*this);
}

// Overload operator '--fixed'
Fixed	Fixed::operator--()
{
	_value--;
	return (*this);
}

// Overload operator 'fixed++'
Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	++_value;
	return (tmp);
}

// Overload operator 'fixed--'
Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	--_value;
	return (tmp);
}



// Get the raw bits of a Fixed
int	Fixed::getRawBits( void ) const
{
	return ( _value );
}

// Set the raw bits of a Fixed
void	Fixed::setRawBits( int const raw )
{
	_value = raw;
}

// Return fixed float value
float	Fixed::toFloat( void ) const
{
	return ((float)_value / (float)(1 << _nBits)); // ex: 1 << 8 = 2^8 = 256
}

// Return fixed int value
int		Fixed::toInt( void ) const
{
	return _value >> _nBits;
}

// Return the smallest fixed by float
Fixed	&Fixed::min( Fixed &fixed1, Fixed &fixed2 )
{
	if ( fixed1.toFloat() <= fixed2.toFloat())
		return ( fixed1 );
	return ( fixed2 );
}

// Return the smallest fixed by float, but const
const Fixed	&Fixed::min( const Fixed &fixed1, const Fixed &fixed2 )
{
	if ( fixed1.toFloat() <= fixed2.toFloat())
		return ( fixed1 );
	return ( fixed2 );
}

// Return the biggest fixed by float
Fixed	&Fixed::max( Fixed &fixed1, Fixed &fixed2 )
{
	if ( fixed1.toFloat() >= fixed2.toFloat())
		return ( fixed1 );
	return ( fixed2 );
}

// Return the biggest fixed by float, but const
const Fixed	&Fixed::max( const Fixed &fixed1, const Fixed &fixed2 )
{
	if ( fixed1.toFloat() >= fixed2.toFloat())
		return ( fixed1 );
	return ( fixed2 );
}
