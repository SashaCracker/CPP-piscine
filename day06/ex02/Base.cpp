#include "Base.hpp"

Base::~Base() {}

Base *generate(void) {
	int i;

	srand((uint)time(0));
	i = rand() % 3 + 1;
	switch (i) {
		case 1:
			return new A;
		case 2:
			return new B;
		case 3:
			return new C;
	}
	return 0;
}

void identify(Base *p) {
	if (dynamic_cast<A*>(p) != 0)
		std::cout << "Pointer refers to class A" << std::endl;
	else if (dynamic_cast<B*>(p) != 0)
		std::cout << "Pointer refers to class B" << std::endl;
	else if (dynamic_cast<C*>(p) != 0)
		std::cout << "Pointer refers to class C" << std::endl;
	else
		std::cout << "Conversion is NOT ok!" << std::endl;
}

void identify(Base &p) {
	try
	{
		A   &cl_a = dynamic_cast<A&>(p);
		std::cout << "A identified from reference" << std::endl;
		static_cast<void>(cl_a);
	}
	catch (std::bad_cast &bc)
	{
		std::cout << "Failed to cast A" << bc.what() << std::endl;
	}
	try
	{
		B   &cl_b = dynamic_cast<B &>(p);
		std::cout << "B identified from reference" << std::endl;
		static_cast<void>(cl_b);
	}
	catch (std::bad_cast &bc)
	{
		std::cout << "Failed to cast B" << bc.what() << std::endl;
	}
	try
	{
		C   &cl_c = dynamic_cast<C &>(p);
		std::cout << "C identified from reference" << std::endl;
		static_cast<void>(cl_c);
	}
	catch (std::bad_cast &bc)
	{
		std::cout << "Failed to cast C" << bc.what() << std::endl;
	}
}
