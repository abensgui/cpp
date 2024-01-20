#include "RPN.hpp"

RPN::RPN()
{
}

RPN::RPN(const RPN &src)
{
	st = src.st;
}

RPN &RPN::operator=(RPN const &rhs)
{
	st = rhs.st;
	return *this;
}

RPN::~RPN()
{
}

void RPN::ReversePolishNotation(char *str)
{
	int i;
	int num1 = 0;
	int num2 = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
		{
			if (st.size() >= 2)
			{
				num1 = st.top();
				st.pop();
				num2 = st.top();
				st.pop();
				if (str[i] == '+')
					st.push(num2 + num1);
				else if (str[i] == '-')
					st.push(num2 - num1);
				else if (str[i] == '/')
				{
					if(num1 == 0)
						throw(std::invalid_argument("error"));
					st.push(num2 / num1);
				}
				else if (str[i] == '*')
					st.push(num2 * num1);
			}
			else
				throw(std::length_error("error"));
		}
		else if (isdigit(str[i]))
			st.push(str[i] - 48);
		else if (str[i] != ' ')
			throw(std::length_error("error"));
		i++;
	}
	if(st.size() != 1)
			throw(std::length_error("error"));
	std::cout << st.top() << std::endl;
}