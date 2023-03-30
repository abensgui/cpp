#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
	data = src.data;
}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &rhs)
{
	data = rhs.data;
	return *this;
}

BitcoinExchange::~BitcoinExchange()
{
}
int is_leap(int y)
{
	if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
		return (1);
	return (0);
}
bool ft_isdigit(std::string str)
{
	int point = 0;
	std::string::iterator it = str.begin();
	if (*it == '-' || *it == '+')
		it++;
	while (*it)
	{
		if (!isdigit(*it))
		{
			if (*it == '.')
				point++;
			else
				return (0);
			if (point > 1)
				return (0);
		}
		it++;
	}
	--it;
	if ('0' > *it || *it > '9')
		return (0);
	return (1);
}
int check_date(std::string str)
{
	int y, m, d;
	if (str.length() != 10)
		return (1);
	if (sscanf(str.c_str(), "%d-%d-%d", &y, &m, &d) != 3)
		return (1);
	if (y < 2009  || d < 1 || m < 1 || m > 12 || d > 31)
		return (1);
	if (m == 2 && d > 29 && is_leap(y))
		return(1);
	if (m == 2 && d > 28 && !is_leap(y))
		return(1);
	if (m < 8 && m % 2 == 0 && d > 30)
		return (1);
	if (m > 7 && m % 2 != 0 && d > 30)
		return (1);
	return (0);
}
void BitcoinExchange::creatr_data(void)
{
	std::fstream f;

	f.open("data.csv", std::fstream::in);
	if (!f.is_open())
		throw(std::invalid_argument("error"));
	std::string line;
	size_t pos;
	while (std::getline(f, line))
	{
		pos = line.find(',');
		data[line.substr(0, pos)] = atof(line.substr(pos + 1, line.length()).c_str());
	}
}

void BitcoinExchange::Exchange_Bitcoin(char *file)
{
	std::fstream f1;
	std::string line;
	size_t pos;
	f1.open(file, std::fstream::in);
	if (!f1.is_open())
		throw(std::invalid_argument("error"));
	std::getline(f1, line);
	if (line != "date | value")
		throw(std::invalid_argument("error"));
	std::string key;
	std::map<std::string, float>::iterator it;
	while (std::getline(f1, line))
	{
		try
		{
			struct tm *timeptr;
			time_t current_time = time(NULL);
			timeptr = localtime(&current_time);
			pos = line.find('|');
			if (check_date(line.substr(0, pos - 1)))
				throw(std::invalid_argument("Error: bad input => " + line));

			if (line.c_str()[pos - 1] != ' ' || line.c_str()[pos + 1] != ' ' || line.c_str()[pos - 2] == ' ' || line.c_str()[pos + 2] == ' ')
				throw(std::invalid_argument("Error: bad input => " + line));

			if (!ft_isdigit(line.substr(pos + 2, line.length())))
				throw(std::invalid_argument("Error: bad input => " + line));

			if (atof(line.substr(pos + 2, line.length()).c_str()) < 0)
				throw(std::invalid_argument("Error: not a positive number."));

			it = data.upper_bound(line.substr(0, pos));
			if ((*it).first != (*data.begin()).first)
				it--;
			key = (*it).first;

			if (atof(line.substr(pos + 2, line.length()).c_str()) > 1000)
				throw(std::invalid_argument(line.substr(pos + 2, line.length()) + " Error: too large a number."));

			std::cout << line.substr(0, pos - 1) << " => "
					  << line.substr(pos + 2, line.length()) << " = "
					  << data[key] * atof(line.substr(pos + 1, line.length()).c_str()) << std::endl;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}