#include "iter.hpp"

int	main(void)
{
	std::string arr[3] = 
		{"All", 
		"i need", 
		"is your, Loooooove tonight"};

	::iter(arr, 3, print);
	return (0);
}