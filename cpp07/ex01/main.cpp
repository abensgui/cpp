#include "Iter.hpp"

template <typename T>
void print(T const &e)
{
	std::cout << e << std::endl;
	return;
}
int main()
{
	int t[]= {1,2,3,4,5,6,7,8};
	iter(t, 8, print);
	return 0;
}