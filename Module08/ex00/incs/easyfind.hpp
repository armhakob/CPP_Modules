#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <list>
# include <iterator>
# include <stdexcept>

template <typename T>
void	easyfind(T &container, int occ)
{
	typename T::iterator it = std::find(container.begin(), container.end(), occ);

	if (it == container.end())
		throw std::out_of_range("Occurrence not found.");
	std::cout << "Index of the first occurence was " << std::distance(container.begin(), it) << "." << std::endl;
}

#endif