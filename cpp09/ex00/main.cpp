#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{

	std::cout << atof("-0")<< std::endl;
	try
	{
		if (ac != 2)
			throw(std::invalid_argument("Error: could not open file"));
		BitcoinExchange bt;
		bt.creatr_data();
		bt.Exchange_Bitcoin(av[1]);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}