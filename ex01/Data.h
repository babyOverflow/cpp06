#include <string>

struct Data
{
	int a;
	int b;
	int c;
	std::string str;
	char d;
};

uintptr_t serialize(Data* ptr);

Data* deserialize(uintptr_t raw);
