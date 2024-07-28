#ifndef FIXED_HPP

# define FIXED_HPP
# include <iostream>

class Fixed
{
	private:
		int					_num;
		static const int	_fract_bit;
	public:
		Fixed(void);
		Fixed(Fixed const &copy);
		~Fixed(void);
		Fixed	&operator=(Fixed const &copy);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif