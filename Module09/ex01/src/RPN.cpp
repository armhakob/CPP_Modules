# include "RPN.hpp"

RPN::RPN()
{}

RPN::RPN(const RPN& other)
{
	*this = other;
}

RPN& RPN::operator=(const RPN &other)
{
	if (this != &other)
		stack = other.stack;
	return *this;
}

RPN::~RPN()
{}

bool	RPN::isValidExpression(std::string expr)
{
	if (expr.empty() || !std::isdigit(expr[0]))
		return false;
	int counter = 0;
	for(size_t i = 0; i < expr.size(); ++i)
	{
		if (expr[i] == ' ' && i + 1 != expr.size() && expr[i + 1] != ' ')
			continue;
		else if (std::isdigit(expr[i]) && i + 1 != expr.size() && expr[i + 1] == ' ')
			counter++;
		else if (expr[i] == '+' || expr[i] == '-' || expr[i] == '*' || expr[i] == '/')
		{
			if (i + 1 != expr.size() && expr[i + 1] != ' ')
				return false;
			counter--;
		}
		else
			return false;
	}
	return (counter == 1);
}

float	RPN::calculate(std::string expr)
{
	for (size_t i = 0; i < expr.size(); ++i)
	{
		if (std::isdigit(expr[i]))
			stack.push(expr[i] - '0');
		else if (expr[i] == ' ')
			continue;
		else
		{
			float tmp2 = stack.top();
			stack.pop();
			float tmp1 = stack.top();
			stack.pop();
			switch (expr[i])
			{
				case '+':
					stack.push(tmp1 + tmp2);
					break;
				case '-':
					stack.push(tmp1 - tmp2);
					break;
				case '*':
					stack.push(tmp1 * tmp2);
					break;
				case '/':
					if (tmp2 == 0)
						throw std::runtime_error("Error: division by zero.");
					stack.push(tmp1 / tmp2);
					break;
			}
		}
	}
	return (stack.top());
}