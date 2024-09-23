#include "Classes.hpp"

Base::~Base(){};

Base*	generate(void)
{
	int	rand;

	rand = std::rand() % 3;
	switch (rand)
	{
		case 0:
			return (new A());
			break ;
		case 1:
			return (new B());
			break ;
		case 2:
			return (new C());
			break ;
	}
	return (NULL);
}

void identify(Base* p)
{
	A* aobj = dynamic_cast<A*>(p);
	B* bobj = dynamic_cast<B*>(p);
	C* cobj = dynamic_cast<C*>(p);

	if (aobj)
		std::cout << "The actual type is A." << std::endl;
	else if (bobj)
		std::cout << "The actual type is B." << std::endl;
	else if (cobj)
		std::cout << "The actual type is C." << std::endl;
}

void identify(Base& p)
{
	try
	{
		A	aobj = dynamic_cast<A&>(p);
		std::cout << "The actual type is A." << std::endl;
	}
	catch(...)
	{}
	try
	{
		B	bobj = dynamic_cast<B&>(p);
		std::cout << "The actual type is B." << std::endl;
	}
	catch(...)
	{}
	try
	{
		C	cobj = dynamic_cast<C&>(p);
		std::cout << "The actual type is C." << std::endl;
	}
	catch(...)
	{}
}