#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iterator>
#include <iostream>

class Span {
	private:
		std::vector<int> numbers;
		unsigned int maxSize;

	public:
		Span();
		Span(unsigned int N);
		Span(const Span &other);
		Span& operator=(const Span &other);
		~Span();

		void addNumber(int number);
		template <typename Iterator>
		void addNumbers(Iterator begin, Iterator end);

		int shortestSpan() const;
		int longestSpan() const;

};

template <typename Iterator>
void Span::addNumbers(Iterator begin, Iterator end) {
	for (; begin < end; ++begin)
		addNumber(*begin);
}

#endif