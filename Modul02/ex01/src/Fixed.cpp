#include "../incs/Fixed.hpp"

const int	Fixed::_fract_bit = 8;

Fixed::Fixed(void): _num(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int &value): _num(value << this->_fract_bit)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float &value): _num(roundf(value * (1 << this->_fract_bit)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
		this->_num = copy.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_num);
}

void	Fixed::setRawBits(int const raw)
{
	this->_num = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_num / (1 << this->_fract_bit));
}

int	Fixed::toInt(void) const
{
	return (this->_num >> this->_fract_bit);
}

std::ostream	&operator<<(std::ostream &ost, const Fixed &fixed)
{
	return (ost << fixed.toFloat());
}