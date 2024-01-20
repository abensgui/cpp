#include "RPN.hpp"
int main(int ac, char **av)
{
	try
	{
		if(ac != 2)
			throw(std::invalid_argument("error"));
		RPN R;
		R.ReversePolishNotation(av[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}