#include "../incs/Fixed.hpp"

const int Fixed::fract_bits = 8;

Fixed::Fixed():_num(0)
{
}

Fixed::Fixed(const Fixed &other)
{
	this->_num = other.getRawBits();
}

Fixed& Fixed::operator=(const Fixed &rhs)
{
	if (this != &rhs)
		this->_num = rhs.getRawBits();
	return(*this);
}

std::ostream& operator<<(std::ostream &os, const Fixed &num)
{
	os << num.toFloat();
	return (os);
}

Fixed::Fixed(const int num)
{
	_num = num * (1 << fract_bits);
}


Fixed::Fixed(const float num)
{
	_num = roundf(num * (1 << fract_bits));
}

Fixed:: ~Fixed()
{
}

int Fixed::getRawBits( void ) const
{
	return (this->_num);
}

void Fixed::setRawBits( int const raw )
{
	this->_num = raw;
}

float Fixed::toFloat( void ) const
{
	float num = static_cast<float>(this->_num);
	return (num / (1 << fract_bits));
}

int Fixed::toInt( void ) const
{
	int num = static_cast<int>(_num);
	return (num / (1 << fract_bits));
}

bool Fixed:: operator>(const Fixed &num) const
{
	return (this->_num > num._num);
}

bool Fixed:: operator<(const Fixed &num) const
{
	return (this->_num < num._num);
}

bool Fixed:: operator>=(const Fixed &num) const
{
	return (this->_num >= num._num);
}

bool Fixed:: operator<=(const Fixed &num) const
{
	return (this->_num <= num._num);
}

bool Fixed:: operator==(const Fixed &num) const
{
	return (this->_num  == num._num );
}

bool Fixed:: operator!=(const Fixed &num) const
{
	return (this->_num  != num._num );
}

Fixed Fixed:: operator+(const Fixed &num)
{
	Fixed temp;
	temp._num  = _num  + num._num ;
	return (temp);
}

Fixed Fixed:: operator-(const Fixed &num)
{
	Fixed temp;
	temp._num  = _num  - num._num ;
	return (temp);
}

Fixed Fixed:: operator*(const Fixed &num)
{
	Fixed temp;
	temp._num  = toFloat() * num.toFloat();
	return (temp);
}

Fixed Fixed:: operator/(const Fixed &num)
{
	Fixed temp;
	temp._num  = _num  / num._num ;
	return (temp);
}

Fixed Fixed:: operator++()
{
	this->_num ++;
	return (*this);
}

Fixed Fixed:: operator++(int)
{
	Fixed temp(*this);
	this->_num ++;
	return (temp);
}

Fixed Fixed:: operator--()
{
	this->_num --;
	return (*this);
}

Fixed Fixed:: operator--(int)
{
	Fixed temp(*this);
	this->_num --;
	return (temp);
}

const Fixed& Fixed::max(const Fixed &num1, const Fixed &num2)
{
	if (num1 > num2)
		return (num1);
	return (num2);
}

const Fixed& Fixed::min(const Fixed &num1, const Fixed &num2)
{
	if (num1 < num2)
		return (num1);
	return (num2);
}

Fixed& Fixed::max(Fixed &num1, Fixed &num2)
{
	if (num1 > num2)
		return (num1);
	return (num2);
}

Fixed& Fixed::min(Fixed &num1, Fixed &num2)
{
	if (num1 < num2)
		return (num1);
	return (num2);
}