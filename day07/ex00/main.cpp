#include "tmp_max.hpp"
#include "tmp_min.hpp"
#include "tmp_swap.hpp"

int main() {
	int a = 2;
	int b = 3;

	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min(a, b) = " << ::min( a, b ) << std::endl;
	std::cout << "max(a, b) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	std::cout << std::endl;
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min(c, d) = " << ::min( c, d ) << std::endl;
	std::cout << "max(c, d) = " << ::max( c, d ) << std::endl;

	float f1 = 21.42f;
	float f2 = 42.21f;

	std::cout << std::endl;
	::swap(f1, f2);
	std::cout << "f1 = " << f1 << ", f2 = " << f2 << std::endl;
	std::cout << "min(f1, f2) = " << ::min( f1, f2 ) << std::endl;
	std::cout << "max(f1, f2) = " << ::max( f1, f2 ) << std::endl;

	return 0;
}
