#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <stack>


class RPN
{

public:
	RPN();
	RPN(RPN const &src);
	RPN &operator=(RPN const &rhs);
	~RPN();
	void ReversePolishNotation(char *str);

private:
	std::stack<int> st; 
};

#endif /* ************************************************************* RPN_H */