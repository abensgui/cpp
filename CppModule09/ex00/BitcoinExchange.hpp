#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <cstdio>
#include <sstream>
#include <time.h>
#include <ctime>

class BitcoinExchange
{
private:
	std::map<std::string, float> data;

public:
	BitcoinExchange();
	BitcoinExchange(BitcoinExchange const &src);
	~BitcoinExchange();
	BitcoinExchange &operator=(BitcoinExchange const &rhs);
	void creatr_data(void);
	void Exchange_Bitcoin(char *file);
};
// float to_float(std::string str);
bool ft_isdigit(std::string str);
#endif /* ************************************************* BITCOINEXCHANGE_H */