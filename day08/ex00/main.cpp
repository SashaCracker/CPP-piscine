#include "easyfind.hpp"
#include <vector>
#include <list>

int main() {
	std::cout << "----------Example with vector----------" << std::endl;
	std::vector<int> my_vector;
	my_vector.push_back(1);
	my_vector.push_back(8);
	my_vector.push_back(-3);
	my_vector.push_back(3);
	my_vector.push_back(0);
	my_vector.push_back(-8);
	my_vector.push_back(12);
	my_vector.push_back(6);
	std::cout << "We've got this vector:" << std::endl;
	for (unsigned long i = 0; i < my_vector.size(); i++)
		std::cout << my_vector[i] << " ";
	std::cout << std::endl;
	int goal;
	std::cout << "What do you want to find in it? ";
	std::cin >> goal;
	easyfind(my_vector, goal);
	std::cout << std::endl;
	std::cout << "----------Example with list----------" << std::endl;
	std::list<int> my_list;
	my_list.push_back(1);
	my_list.push_back(8);
	my_list.push_front(-3);
	my_list.push_back(3);
	my_list.push_front(0);
	my_list.push_back(-8);
	my_list.push_back(12);
	my_list.push_back(6);
	std::list<int>::iterator it;
	std::cout << "We've got this list:" << std::endl;
	for (it = my_list.begin(); it != my_list.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::cout << "What do you want to find in it? ";
	std::cin >> goal;
	easyfind(my_list, goal);
	std::cout << std::endl;
	return 0;
}
