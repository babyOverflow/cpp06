#include <cmath>
#include <exception>
#include <iostream>

#include "ScalarConverter.h"


bool ex00Isinf(double d)
{
	double zero = 0;
	double posinf = 1 / zero;
	double naginf = - 1 / zero;
	if (d == posinf || d == naginf)
		return true;
	return false;
}

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		return 0;
	}

	std::string arg(argv[1]);
	double d;
	try
	{
		d = ScalarConverter::convert(arg);
	}
	catch (std::exception &e)
	{
		std::cout << "char:  impossible" << std::endl;
		std::cout << "int: impossible"<< std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return 0;
	}

	std::cout.precision(1);
	std::cout << std::fixed;
	if (d != d || ex00Isinf(d))
	{
		std::cout << "char:  impossible" << std::endl;
		std::cout << "int: impossible"<< std::endl;
		std::cout << "float: " << static_cast<float>(d) << 'f' << std::endl;
		std::cout << "double: " << d << std::endl;
	}
	else
	{
		if (std::isprint(static_cast<char>(d)))
			std::cout << "char: " << static_cast<char>(d) << std::endl;
		else
			std::cout << "char:  Non displayable" << std::endl;
		std::cout << "int: "<< static_cast<int>(d) << std::endl;
		std::cout << "float: " << static_cast<float>(d) << 'f' << std::endl;
		std::cout << "double: " << d << std::endl;
	}


}