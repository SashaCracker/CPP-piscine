#ifndef C_TMP_MAX_HPP
#define C_TMP_MAX_HPP

#include <iostream>

template<typename T>
T const & max(T const & x, T const & y)
{
	return ((y >= x) ? y : x);
}

#endif