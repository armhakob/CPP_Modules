#ifndef PMERGEME_TPP
#define PMERGEME_TPP

#include "PmergeMe.hpp"

template <typename T>
void	PmergeMe::_insert(T &cont, T nums)
{
	if (nums.size() < 2)
	{
		cont.insert(std::upper_bound(cont.begin(), cont.end(), *nums.begin()), *nums.begin());
		return ;
	}
	size_t pow_2 = 2;
	for (size_t i = 0; i < nums.size(); i++)
	{
		typename T::iterator it;
		size_t n = std::min(pow_2, nums.size());
		it = nums.begin() + n;
		while (it != nums.begin())
		{
			--it;
			cont.insert(std::upper_bound(cont.begin(), cont.end(), *it), *it);
		}
		nums.erase(nums.begin(), nums.begin() + n);
		pow_2 = pow(pow_2, i + 2) - pow_2;
	}
}

template <typename T>
void	PmergeMe::_sort(T &cont)
{
	T	l_nums;
	T	s_nums;

	if (cont.size() > 3)
	{
	for(size_t i = 0; i < cont.size(); i += 2)
	{
	if (i == cont.size() - 1)
	{
	s_nums.push_back(cont[i]);
	break ;
	}
	if (cont[i] > cont[i + 1])
	std::swap(cont[i], cont[i + 1]);
	s_nums.push_back(cont[i]);
	l_nums.push_back(cont[i + 1]);
	}
	cont = l_nums;
	size_t first_s = 0;
	for (size_t i = 0; i < cont.size(); i++)
	{
	if (cont[first_s] > cont[i])
	first_s = i;
	}
	_sort(cont);
	cont.insert(cont.begin(), s_nums[first_s]);
	s_nums.erase(s_nums.begin() + first_s);
	_insert(cont, s_nums);
	}
	else if (cont.size() > 1)
	{
	if (cont[0] > cont[1])
	std::swap(cont[0], cont[1]);
	if (cont.size() == 3)
	{
	s_nums.push_back(cont[2]);
	cont.erase(cont.end() - 1);
	_insert(cont, s_nums);
	}
	}
}


#endif