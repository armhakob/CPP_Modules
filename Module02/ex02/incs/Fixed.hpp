#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					_num;
		static const int	_fract_bits;
	public:
		Fixed(void);
		Fixed(const int &value);
		Fixed(const float &value);
		Fixed(Fixed const &copy);
		~Fixed(void);
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

        //Arithmetic
		Fixed	&operator=(Fixed const &copy);
		Fixed	operator*(Fixed const &other_num) const;
		Fixed	operator/(Fixed const &other_num) const;
		Fixed	operator+(Fixed const &other_num) const;
		Fixed	operator-(Fixed const &other_num) const;
        //Comparison
		bool	operator>(Fixed const &other_num) const;
		bool	operator<(Fixed const &other_num) const;
		bool	operator>=(Fixed const &other_num) const;
		bool	operator<=(Fixed const &other_num) const;
		bool	operator!=(Fixed const &other_num) const;
		bool	operator==(Fixed const &other_num) const;
        //Increment/Decrement
		Fixed	operator++(void);
		Fixed	operator++(int);
		Fixed	operator--(void);
		Fixed	operator--(int);

		static Fixed		&min(Fixed &a, Fixed &b);
		static const Fixed	&min(Fixed const &a, Fixed const &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static const Fixed	&max(Fixed const &a, Fixed const &b);
};

std::ostream	&operator<<(std::ostream &os, const Fixed &fixed);

#endif