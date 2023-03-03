#include <cstdint>
#include <iostream>
#include "Data.h"


uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int main()
{
	Data data = {
		1, 2, 3, "123", 'c'
	};

	uintptr_t p = serialize(&data);
	Data* pdata = deserialize(p);

	if (pdata == &data)
		std::cout << "same\n"; 
	else
		std::cout << "diff\n"; 
}