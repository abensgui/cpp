#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>
#include <vector>
#include <deque>
template <typename T>
typename T::iterator esayfind(T &c, int n);

#endif

template <typename T>
typename T::iterator esayfind(T &c, int n)
{
	typename T::iterator t;
	t = std::find(c.begin(), c.end(), n);
	if (t != c.end())
		return (t);
	throw std::invalid_argument("not find");
}
