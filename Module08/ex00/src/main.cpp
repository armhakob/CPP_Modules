#include "easyfind.hpp"

int main()
{
	std::vector<int> vec;

	vec.push_back(1111);
	vec.push_back(-345);
	vec.push_back(123);
	vec.push_back(90);
	vec.push_back(8);

	try
	{
		easyfind(vec, 980);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	try
	{
		easyfind(vec, -345);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}