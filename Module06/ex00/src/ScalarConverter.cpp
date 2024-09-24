#include "ScalarConverter.hpp"
#include <cstdlib>

ScalarConverter::ScalarConverter()
{}

ScalarConverter::ScalarConverter(const ScalarConverter &other)
{
	(void)other;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &other)
{
	(void)other;
	return *this;
}

ScalarConverter::~ScalarConverter()
{}

const char* ScalarConverter::ScalarConverter_exp::what() const throw()
{
	return "Conversion is imposible!";
}

bool ScalarConverter::is_all_digit(const std::string &str)
{
	for (size_t i = 0; i < str.size(); i++)
	{
		if (!std::isdigit(str[i]))
			return false;
	}
	return true;
}

bool ScalarConverter::is_double(const std::string &str)
{
	int dot_flag = 0;
	for (size_t i = 0; i < str.size(); i++)
	{
		if (!std::isdigit(str[i]))
		{
			if (str[i] == '.' && dot_flag != 1)
				dot_flag = 1;
			else
				return false;
		}
	}
	return true;
}

bool ScalarConverter::is_float(const std::string &str)
{
	int flag = 0;
	for (size_t i = 0; i < str.size(); i++)
	{
		if (!std::isdigit(str[i]))
		{
			if (str[i] == '.' && flag != 1)
				flag = 1;
			else if (str[i] == 'f' && flag == 1 && (i + 1 == str.size()))
				return true;
			else
				return false;
		}
	}
	return true;
}

bool ScalarConverter::is_lit(const std::string &str)
{
	if (str == "nan" || str == "inf" || str == "+inf" || str == "-inf"
		|| str == "nanf" || str == "inff" || str == "+inff" || str == "-inff")
		return true;
	return false;
}
void	ScalarConverter::intconvert(const std::string &dig)
{
	long long_value = strtol(dig.c_str(), 0, 10);
	if(long_value < INT_MIN || long_value > INT_MAX)
	{
		std::cout << "Int out of size" << std::endl;
		return ;
	}
	int num = atoi(dig.c_str());
	if (std::isprint(num))
		std::cout << "char: '" << static_cast<char>(num) <<"'" <<std::endl;
	else if ((num >= 0 && num < 33) || (num == 127))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << num << std::endl;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(num) << "f" <<std::endl;
	std::cout << "double: " << static_cast<double>(num) << std::endl;
}

void	ScalarConverter::charconvert(const std::string &str)
{
	char c = str[0];
	std::cout << "char: '"  << c << "'"<<std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" <<std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void	ScalarConverter::doubleconvert(const std::string &str)
{
	errno = 0;
	double n = std::strtod(str.c_str(), 0);
	if (n == HUGE_VAL || n == -HUGE_VAL || errno == ERANGE)
	{
		std::cout << "Double out of size" <<std::endl;
		return ;
	}
	if (std::isprint(n))
		std::cout << "char: '" << static_cast<char>(n) << "'"<< std::endl;
	else if ((static_cast<int>(n) >= 0 && static_cast<int>(n) < 33) || (static_cast<int>(n) == 127))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << static_cast<int>(n) << std::endl;
	if (static_cast<int>(n) == n)
	{
		std::cout << "float: " << static_cast<float>(n) << ".0f" << std::endl;
		std::cout << "double: " << n << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << static_cast<float>(n) << "f" <<std::endl;
		std::cout << "double: " << n << std::endl;
	}
}

void	ScalarConverter::floatconvert(const std::string &str)
{
	errno = 0;
	double val = std::strtod(str.c_str(), 0);
	if (val == HUGE_VAL || val == -HUGE_VAL || errno == ERANGE)
	{
		std::cout << "Float out of size" <<std::endl;
		return ;
	}
	float n = atof(str.c_str());
	if (std::isprint(val))
		std::cout << "char: '" << static_cast<char>(n) << "'" << std::endl;
	else if ((static_cast<int>(n) >= 0 && static_cast<int>(n) < 33) || (static_cast<int>(n) == 127))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << static_cast<int>(n) << std::endl;
	if (static_cast<int>(n) == val)
	{
		std::cout <<"float: " << n << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(n) << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << n << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(n) << std::endl;
	}
}

void	ScalarConverter::lit_convert(const std::string &str)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (str == "nan" || str == "inf" || str == "+inf" || str == "-inf")
	{
		double n = std::strtod(str.c_str(), 0);
		std::cout << "float: " << static_cast<float>(n) << "f" << std::endl;
		std::cout << "double: " << n << std::endl;
	}
	else
	{
		float n = atof(str.c_str());
		std::cout << "float: " << n << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(n) << std::endl;
	}
}

void ScalarConverter::convert(const std::string &str)
{
	if (ScalarConverter::is_lit(str))
	{
		ScalarConverter::lit_convert(str);
		return ;
	}
	if (ScalarConverter::is_all_digit(str))
		ScalarConverter::intconvert(str);
	else if (str.size() == 1)
		ScalarConverter::charconvert(str);
	else if (is_double(str))
		ScalarConverter::doubleconvert(str);
	else if (ScalarConverter::is_float(str))
		ScalarConverter::floatconvert(str);
	else if (str[0] == '-' || str[0] == '+')
	{
		if (ScalarConverter::is_all_digit(str.substr(1, str.size())))
			ScalarConverter::intconvert(str);
		else if (ScalarConverter::is_double(str.substr(1, str.size())))
			ScalarConverter::doubleconvert(str);
		else if (ScalarConverter::is_float(str.substr(1, str.size())))
			ScalarConverter::floatconvert(str);
		else
		std::cout << "Input is not a literal." << std::endl;
	}
	else
		std::cout << "Input is not a literal." << std::endl;
}