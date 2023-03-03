#include <string>
#include <exception>

class ScalarConverter
{
	public:
	static double convert(std::string s);

	bool isChar(double d);

class FailConvert: std::exception
{

};

	private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter& other);
	~ScalarConverter();
	ScalarConverter& operator=(const ScalarConverter& other);
};