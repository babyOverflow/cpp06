#include <climits>
#include <cmath>
#include <cstddef>
#include <stdexcept>
#include <iostream>

#include "ScalarConverter.h"

double ScalarConverter::convert(std::string s)
{
	std::size_t pos;

	double d;
	try
	{
		d = std::stod(s.c_str(), &pos);
	}
	catch (std::invalid_argument& e)
	{
		if (s.length() == 1)
			return s[0];
		throw e;
	}
	return d;
}
