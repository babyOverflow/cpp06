#include <exception>
#include <string>
#include <iostream>
#include <typeinfo>
#include "Base.h"
#include "A.h"
#include "C.h"
#include "B.h"

void identify(Base* p)
{
	std::string type;

	try
	{
		A* a = dynamic_cast<A*>(p);
		B* b = dynamic_cast<B*>(p);
		C* c = dynamic_cast<C*>(p);
		if (a != NULL)
			type = "A";
		else if (b != NULL)
			type = "B";
		else if (c != NULL)
			type = "C";
		else
			type = "not ABC";
	}
	catch (std::exception& e)
	{
	
	}

	std::cout << "type is " << type << std::endl;
}
void identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		std::cout << "type is A" << std::endl;
		return;
	}
	catch(std::bad_cast &e)
	{}

	try
	{
		B& b = dynamic_cast<B&>(p);
		std::cout << "type is B" << std::endl;
		return;
	}
	catch(std::bad_cast &e)
	{}

	try
	{
		C& c = dynamic_cast<C&>(p);
		std::cout << "type is C" << std::endl;
		return;
	}
	catch(std::bad_cast &e)
	{}
	std::cout << "type is not ABC" << std::endl;
}

int main()
{
	Base* bptr = NULL;

	identify(bptr);
	bptr = new A();
	identify(bptr);
	
	B b;
	identify(b);

	Base base;
	identify(base);

	C c;
	Base& cref = c;
	identify(c);

	Base* cptr = &cref;
	identify(cptr);

	delete bptr;
}
