#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe( const PmergeMe & src )
{
	v_sort = src.v_sort;
	d_sort = src.d_sort;
}

PmergeMe &				PmergeMe::operator=( PmergeMe const & rhs )
{
	v_sort = rhs.v_sort;
	return *this;
}

PmergeMe::~PmergeMe()
{
}

void check_arg(char *av)
{
	int i = 0;
	if(av[i] == '+')
		i++;
	while(av[i])
	{
		if(!isdigit(av[i]))
			throw(std::invalid_argument("error"));
		i++;
	}
} 

void PmergeMe::merge_insertion_sort_vector(char **str, int ac)
{
	int i = 0;
	int s = 0;
	std::vector<std::pair<int, int> > v;
	if (ac % 2 != 0)
		s = atoi(str[ac - 1]);
	i = 0;
	while (i < ac - 1)
	{
		std::pair<int, int> p;
		p.first = atoi(str[i++]);
		p.second = atoi(str[i++]);
		if (p.first > p.second)
			std::swap(p.first, p.second);
		v.push_back(p);
	}
	std::sort(v.begin(), v.end());
	std::vector<std::pair<int, int> >::iterator it = v.begin();
	
	while (it != v.end())
	{
		v_sort.push_back((*it).first);
		it++;
	}
	it = v.begin();
	std::vector<int>::iterator low;
	while (it != v.end())
	{
		low = std::upper_bound(v_sort.begin(), v_sort.end(), (*it).second);
		v_sort.insert(low, (*it).second);
		it++;
	}
	if (ac % 2 != 0)
	{
		low = std::upper_bound(v_sort.begin(), v_sort.end(), s);
		v_sort.insert(low, s);
	}
}


void PmergeMe::merge_insertion_sort_deque(char **str, int ac)
{
	int i = 0;
	int s = 0;
	std::deque<std::pair<int, int> > d;
	if (ac % 2 != 0)
		s = atoi(str[ac - 1]);
	i = 0;
	while (i < ac - 1)
	{
		std::pair<int, int> p;
		p.first = atoi(str[i++]);
		p.second = atoi(str[i++]);
		if (p.first > p.second)
			std::swap(p.first, p.second);
		d.push_back(p);
	}
	std::sort(d.begin(), d.end());
	std::deque<std::pair<int, int> >::iterator it = d.begin();
	while (it != d.end())
	{
		d_sort.push_back((*it).first);
		it++;
	}
	it = d.begin();
	std::deque<int>::iterator low;
	while (it != d.end())
	{
		low = std::upper_bound(d_sort.begin(), d_sort.end(), (*it).second);
		d_sort.insert(low, (*it).second);
		it++;
	}
	if (ac % 2 != 0)
	{
		low = std::upper_bound(d_sort.begin(), d_sort.end(), s);
		d_sort.insert(low, s);
	}
}

void PmergeMe::ft_print(void)
{
	std::vector<int>::iterator it = v_sort.begin();
	while(it != v_sort.end())
	{
		std::cout << " "<< *it;
		it++;
	}
	std::cout<< std::endl;
}
