#include "iter.hpp"

int main() {
	int intArr[] = {1, 2, 3, 4, 5};
	std::string strArr[] = {"first", "second", "third", "forth", "fifth"};
	
	::iter<const int>(intArr, 5, print);
	std::cout << std::endl;
	::iter<const std::string>(strArr, 5, print);
	return 0;
}
