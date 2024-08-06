#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int _num;
		static const int fract_bits;
	public:
		Fixed();
		Fixed(const Fixed &other);
		Fixed &operator=(const Fixed &rhs);
		Fixed(const int num);
		Fixed(const float num);
		~Fixed();
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		
		bool operator>(const Fixed &num) const;
		bool operator<(const Fixed &num) const;
		bool operator>=(const Fixed &num) const;
		bool operator<=(const Fixed &num) const;
		bool operator==(const Fixed &num) const;
		bool operator!=(const Fixed &num) const;
		
		Fixed operator+(const Fixed &num);
		Fixed operator-(const Fixed &num);
		Fixed operator/(const Fixed &num);
		Fixed operator*(const Fixed &num);
		
		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--();
		Fixed operator--(int);

		static const Fixed& max(const Fixed &a,const Fixed &b);
		static const Fixed& min(const Fixed &a,const Fixed &b);
		static Fixed& max(Fixed &a, Fixed &b);
		static Fixed& min(Fixed &a, Fixed &b);



};

std::ostream& operator<<(std::ostream &os, const Fixed &num);

#endif