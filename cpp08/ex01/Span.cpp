#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span()
{
	std::cout << "Default constructor called\n";
	v.reserve(0);
	N = 0;
}

Span::Span(int n)
{
	std::cout << "parameter Constractor called\n";
	v.reserve(n);
	N = n;
}

Span::Span( const Span & src )
{
	std::cout << "Copy Constractor called\n";
	this->N = src.N;
	v = src.v;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
	std::cout << "destructur called\n";
}
/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & S)
{
	std::cout << "copy assignment operator Bureauucrat called\n";
	this->N = S.N;
	v = S.v;
	return *this;
}

void Span::addNumber(int n)
{
	if (v.size() >= N)
			throw std::length_error("is full");
	v.push_back(n);
}

void Span::addNumber(iterator begin, iterator end)
{
	while(begin < end)
	{
		if (v.size() >= N)
			throw std::length_error("is full");
		v.push_back(*begin);
		begin++;
	}
}

int Span::shortestSpan()
{
	if(N < 2 || v.size() < 2)
		throw std::length_error("is empty");
	std::sort(v.begin(), v.end());
	int val;
	std::vector<int>::iterator p;
	p = v.begin();
	val = val = *(p + 1) - *p;
	while(p < v.end() - 1)
	{
		if(*p && *(p + 1) - *p < val)
			val = *(p + 1) - *p;
		p++;
	}
    return val;
}

int Span::longestSpan()
{
	if(N < 2 || v.size() <2)
		throw std::length_error("is empty");
	std::sort(v.begin(), v.end());
    return (*(v.end() - 1) - *v.begin());
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/* ************************************************************************** */