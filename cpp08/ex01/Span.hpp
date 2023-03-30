#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
#include <vector>

		typedef std::vector<int>::iterator iterator;
class Span
{

	public:
		Span();
		Span(int n);
		Span( Span const & src );
		~Span();
		Span &		operator=( Span const & S);
		void addNumber(int n);
		void addNumber(iterator begin, iterator end);
		int shortestSpan();
		int longestSpan();

	private:
		unsigned int N;
		std::vector<int> v;



};
#endif /* ************************************************************ SPAN_H */