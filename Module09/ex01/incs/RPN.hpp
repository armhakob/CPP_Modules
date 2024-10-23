#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stdexcept>
#include <stack>
#include <cstdlib>

class RPN
{
	public:
		RPN();
		RPN(const RPN& other);
		RPN& operator=(const RPN& other);
		~RPN();

		bool isValidExpression(std::string expr);
		float calculate(std::string expr);

	private:
		std::stack<float> stack;
};

#endif