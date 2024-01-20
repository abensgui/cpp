#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <utility>
#include <iostream>
#include <sys/time.h> 
class PmergeMe
{

public:
	PmergeMe();
	PmergeMe(PmergeMe const &src);
	PmergeMe &operator=(PmergeMe const &rhs);
	~PmergeMe();
	void merge_insertion_sort_vector(char **str, int ac);
	void merge_insertion_sort_deque(char **str, int ac);
	void ft_print(void);

private:
	std::vector<int> v_sort;
	std::deque<int> d_sort;
};
void check_arg(char *av);

#endif 