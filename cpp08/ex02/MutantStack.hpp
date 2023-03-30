#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{

public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	MutantStack(){};
	MutantStack(const MutantStack &copy) : std::stack<T>(copy){};
	MutantStack &operator=(const MutantStack &copy)
	{
		std::stack<T>::operator=(copy);
		return (*this);
	};
	~MutantStack(){};
	iterator begin() { return (this->c.begin()); };
	iterator end() { return (this->c.end()); };
	const_iterator begin() const { return (this->c.begin()); };
	const_iterator end() const { return (this->c.end()); };
};

#endif /* *********************************************************** MutantStack_H */
