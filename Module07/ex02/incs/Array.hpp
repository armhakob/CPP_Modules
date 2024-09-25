#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	private:
		T*	data;
		size_t	n;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& other);
		Array<T>& operator=(const Array<T>& other);
		~Array();

		unsigned int size() const;
		T& operator[](unsigned int index);
		const T& operator[](unsigned int index) const;
};

# include "Array.tpp"

#endif