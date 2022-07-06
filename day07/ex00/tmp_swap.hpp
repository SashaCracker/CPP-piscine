#ifndef C_TMP_SWAP_HPP
#define C_TMP_SWAP_HPP

#include <iostream>

template<typename T>
void swap(T &x, T &y)
{
	T tmp;
	tmp = x;
	x = y;
	y = tmp;
}

#endif
