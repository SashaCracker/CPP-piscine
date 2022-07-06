#ifndef C_TMP_MIN_HPP
#define C_TMP_MIN_HPP

#include <iostream>

template<typename T>
T const & min(T const & x, T const & y)
{
	return ((y <= x) ? y : x);
}

#endif