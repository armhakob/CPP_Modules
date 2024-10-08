#include "Span.hpp"
#include <iostream>

int main() {
	try {
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	// Test with a range of iterators
	try {
		Span sp2(10000);
		std::vector<int> vec(10000);
		for (int i = 0; i < 10000; ++i) vec[i] = i * 2;
		sp2.addNumbers(vec.begin(), vec.end());
		std::cout << "Shortest Span: " << sp2.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << sp2.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
