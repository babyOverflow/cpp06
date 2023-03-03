#include <climits>
#include <cmath>

#include "ScalarConverter.h"

double ScalarConverter::convert(std::string s)
{

	char *pEnd = NULL;
	double d = std::strtod(s.c_str(), &pEnd);
	if (pEnd == s.c_str())
		throw FailConvert();
	else if (pEnd == NULL)
		throw FailConvert();
	return d;
}
