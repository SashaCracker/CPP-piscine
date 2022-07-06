#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void print (T const &t)
{
	std::cout << t << "\t";
}

template <typename T>
void iter(T *array, int len, void (*foo)(T const &t))
{
	for (int i = 0; i < len; ++i)
		foo(array[i]);
	std::cout << std::endl;
}

#endif
