#include "RPN.hpp"
#include <iostream>

int main(int argc, char** argv) {
	if (argc != 2) {
		std::cerr << "Usage: ./RPN <expression>" << std::endl;
		return 1;
	}

	RPN rpn;
	if (!rpn.isValidExpression(argv[1]))
	{
		std::cerr << "Error: Not a valid expression." << std::endl;
		return 1;
	}
	try {
		float result = rpn.calculate(argv[1]);
		std::cout << result << std::endl;
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
		return 1;
	}

	return 0;
}
