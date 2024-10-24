#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <sys/time.h>
#include <cmath>
#include <vector>
#include <deque>
#include <algorithm>

class PmergeMe
{
	private:
	std::vector<int> vector;
	std::deque<int> deque;
	public:
	PmergeMe();
	PmergeMe(const PmergeMe &other);
	PmergeMe& operator=(const PmergeMe &other);
	~PmergeMe();

	void	isValidInput(int argc, char **argv);
	void	timer();
	template	<typename T> void _insert(T &cont, T nums);
	template	<typename T> void _sort(T &cont);
};

#include "PmergeMe.tpp"
#endif