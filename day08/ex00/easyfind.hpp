#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <iterator>
#include <algorithm>

template<typename T>
void easyfind( T &container, int goal )
{
	typename T::iterator	result = find(container.begin(), container.end(),
										  goal);
	if (result == container.end())
	{
		std::cerr << "There is no such value" << std::endl;
		exit (1);
	}
	std::cout << "It's easy to find your value = " << *result << std::endl;
	typename T::iterator prev = result;
	typename T::iterator out = container.begin();
	out--;
	prev--;
	if (prev == out)
		std::cout << "There is no previous value" << std::endl;
	else
		std::cout << "The previous value is = " << *prev << std::endl;
	typename T::iterator nxt = result;
	nxt++;
	if (nxt == container.end())
		std::cout << "There is no next value" << std::endl;
	else
		std::cout << "The next value is = " << *nxt << std::endl;
}
#endif
