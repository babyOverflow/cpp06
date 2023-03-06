#include <cstdint>
#include <iostream>
#include <iomanip>
#include "Serializer.h"

int main()
{
	Data data = {
		1, 2, 3, "123", 'c'
	};

	uintptr_t p = Serializer::serialize(&data);
	Data* pdata = Serializer::deserialize(p);

	std::cout << std::hex << p << std::endl;
	std::cout <<  pdata << std::endl;
	if (pdata == &data)
		std::cout << "same\n"; 
	else
		std::cout << "diff\n"; 
	std::cout << "Data {\n\t" 
			  << pdata->a << ",\n\t"
			  << pdata->b << ",\n\t"
			  << pdata->c << ",\n\t"
			  << pdata->str << ",\n\t"
			  << pdata->d << ",\n}"  << std::endl;
}
