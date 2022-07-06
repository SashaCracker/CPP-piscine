#include "Span.hpp"

void printVector(Span &span) {
	std::vector<int> v = span.get_vector();
	for (std::vector<int>::iterator it = v.begin(); it != v.end() ; ++it)
		std::cout<< *it << ' ';
	std::cout << std::endl << std::endl;
}

int main() {
	Span span = Span(5);
	try
	{
		span.addNumber(6);
		span.addNumber(3);
		span.addNumber(17);
		span.addNumber(9);
		span.addNumber(11);
		std::cout << "Shortest span is: " << span.shortestSpan() << std::endl;
		std::cout << "Longest span is:  " << span.longestSpan() << std::endl << std::endl;
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}

	std::vector<int> tmp;
	for(int i = 0; i < 100; ++i)
		tmp.push_back(i + 100);
	try
	{
		span.addNumber(tmp.begin(), tmp.end());
		printVector(span);
		std::cout << "Shortest span is: " << span.shortestSpan() << std::endl;
		std::cout << "Longest span is:  " << span.longestSpan() << std::endl;
	}
	catch (std::exception &ex)
	{
		std::cout << ex.what() << std::endl;
	}
	return 0;
}
