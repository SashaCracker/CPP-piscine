#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

class Span {
private:
	unsigned int maxVals;
	std::vector <int> _vals;

public:
	Span();
	Span(unsigned int const &N);
	Span(const Span &span);
	virtual ~Span();

	Span &operator=(const Span &span);

	void addNumber(int n);
	long shortestSpan();
	long longestSpan();
	std::vector<int> get_vector() const;

	template <typename InputIter>
	Span addNumber(InputIter begin, InputIter end);

	class Exception: public std::exception {
		virtual const char *what() const throw() { return "Don't have space to add"; }
	};

	class Exception1: public std::exception {
		virtual const char *what() const throw() { return "Too few values to make span"; }
	};
};

template<class InputIter>
Span Span::addNumber(InputIter begin, InputIter end) {
	int numbersOfElements1 = (int)std::distance(_vals.begin(), _vals.end());
	int numbersOfElements2 = (int)std::distance(begin, end);
	if ((numbersOfElements1 + numbersOfElements2) > (int)maxVals)
		throw Exception();
	_vals.insert(_vals.end(), begin, end);
	return *this;
}

#endif
