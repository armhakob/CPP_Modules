#ifndef ARRAY_TPP
# define ARRAY_TPP

# include "Array.hpp"

template<typename T>
Array<T>::Array() : data(NULL), n(0) {}

template<typename T>
Array<T>::Array(unsigned int n) : n(n) 
{
	data = new T[n]();
	for (unsigned int i = 0; i < n; ++i) 
		data[i] = T();
}

template<typename T>
Array<T>::Array(const Array<T>& other)
{
	n = other.n;
	data = new T[n]; 
	for (unsigned int i = 0; i < n; i++) {
		data[i] = other.data[i];
	}
}

template<typename T>
Array<T>& Array<T>::operator=(const Array& other) {
	if (this != &other) {
		if (data)
			delete[] data;
		n = other.n;
		data = new T[n];
		for (unsigned int i = 0; i < n; i++) {
			data[i] = other[i];
		}
	}
	return *this;
}

template<typename T>
Array<T>::~Array() {
	if (data)
		delete[] data;
}

template<typename T>
T& Array<T>::operator[](unsigned int index) {
	if (index >= n) {
		throw std::out_of_range("Index out of bounds");
	}
	return data[index];
}

template<typename T>
const T& Array<T>::operator[](unsigned int index) const {
	if (index >= n) {
		throw std::out_of_range("Index out of bounds");
	}
	return data[index];
}

template<typename T>
unsigned int Array<T>::size() const {
	return n;
}

#endif