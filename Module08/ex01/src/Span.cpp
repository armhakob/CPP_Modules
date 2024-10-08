#include "Span.hpp"

Span::Span() : maxSize(0) {}

Span::Span(unsigned int N) : maxSize(N) {}

Span::Span(const Span &other) : numbers(other.numbers), maxSize(other.maxSize) {
	std::cout << "Copy constructor called" << std::endl;
}

Span& Span::operator=(const Span &other) {
	if (this != &other) {
		numbers = other.numbers;
		maxSize = other.maxSize;
	}
	return *this;
}

Span::~Span() {
	std::cout << "Destructor called" << std::endl;
}

void Span::addNumber(int number) {
	if (numbers.size() >= maxSize)
		throw std::out_of_range("Span is full.");
	numbers.push_back(number);
}

int Span::shortestSpan() const {
	if (numbers.size() <= 1) {
		throw std::out_of_range("No span can be found with less than 2 numbers");
	}
	std::vector<int> sortedNumbers(numbers);
	std::sort(sortedNumbers.begin(), sortedNumbers.end());
	int minSpan = sortedNumbers[1] - sortedNumbers[0];
	for (size_t i = 2; i < sortedNumbers.size(); ++i) {
		int tmp = sortedNumbers[i] - sortedNumbers[i - 1];
		minSpan = tmp < minSpan ? tmp : minSpan;
	}
	return minSpan;
}

int Span::longestSpan() const {
	if (numbers.size() <= 1) {
		throw std::out_of_range("No span can be found with less than 2 numbers");
	}
	return (*std::max_element(numbers.begin(), numbers.end()) - *std::min_element(numbers.begin(), numbers.end()));
}

