#include <cmath>
#include <cstdlib>
#include <iostream>
#include <limits>
#include <cctype>

#include "ScalarConverter.h"



int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		return 0;
	}


	double d;
	try
	{
		d = ScalarConverter::convert(argv[1]);
	}
	catch (ScalarConverter::FailConvert &e)
	{
		std::cout << "char:  impossible" << std::endl;
		std::cout << "int: impossible"<< std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return 0;
	}

	if (std::isnan(d) || std::isinf(d))
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