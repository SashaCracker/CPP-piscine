#include "MutantStack.hpp"

int main() {
	std::cout << "\nMutantStack as in Subject: " << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top of the stack: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Stack size after pop: " << mstack.size() << std::endl;
	std::cout << "Top of the stack now: " << mstack.top() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "Print using iterators:" <<std::endl;
	while(it != ite){
		std::cout << *it << ' ';
		++it;
	}
	std::cout << std::endl;
	std::cout << "Print using reverse iterators: " << std::endl;
	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();
	++rit;
	--rit;
	while(rit != rite){
		std::cout << *rit << ' ';
		++rit;
	}
	std::cout << std::endl;

	std::stack<int> s(mstack);
	std::cout << "Print as stack:" <<std::endl;
	while (!s.empty())
	{
		std::cout << s.top() << ' ';
		s.pop();
	}
	std::cout << std::endl;


	std::cout << "\nAdditional example with List: " << std::endl;
	std::list<int> list;
	list.push_back(5);
	list.push_back(17);
	std::cout << "Top of the stack: " << list.back() << std::endl;
	list.pop_back();
	std::cout << "Stack size after pop: " << list.size() << std::endl;
	std::cout << "Top of the stack now: " << list.back()  << std::endl;
	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(0);
	std::list<int>::iterator itlist = list.begin();
	std::list<int>::iterator itliste = list.end();
	++itlist;
	--itlist;
	std::cout << "Print using iterators:" <<std::endl;
	while(itlist != itliste){
		std::cout << *itlist << ' ';
		++itlist;
	}
	std::cout << std::endl;
	std::list<int> s2(list);
	std::list<int>::reverse_iterator itlist2 = s2.rbegin();
	std::list<int>::reverse_iterator itliste2 = s2.rend();
	std::cout << "Print a copy using reverse iterators:" <<std::endl;
	while(itlist2 != itliste2){
		std::cout << *itlist2 << ' ';
		++itlist2;
	}
	std::cout << std::endl;

	std::cout << "\nExample with stack based on list: " << std::endl;
	std::stack<int, std::list<int> > test;
	test.push(1);
	test.push(2);
	test.push(3);
	test.push(4);
	test.push(5);
	std::cout << "Top of stack based on list is :" << test.top() << std::endl;
	std::cout << "Size of stack is : " << test.size() << std::endl;
	while (!test.empty())
	{
		std::cout << test.top() << ' ';
		test.pop();
	}
	std::cout << std::endl;
	return 0;
}
