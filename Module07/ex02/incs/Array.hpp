#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	private:
		T*	data;
		size_t	size;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& other);
		~Array();

		const Array& operator=(const Array& other);
		T& operator[](size_t i);
		size_t size() const;
};



#endif