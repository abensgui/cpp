#include "Account.hpp"
#include <ctime>
#include <iostream>


int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int Account::getTotalAmount(void)
{
	return _totalAmount;
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:"<<_nbAccounts << ";total:"<< _totalAmount << ";deposits:" << _totalNbDeposits<<";withdrawals:" << _totalNbWithdrawals << "\n";
}

Account::Account(int initial_deposit)
{
	_accountIndex = 0;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_displayTimestamp();
	std::cout << "index:"<<  _accountIndex <<";amount:"<< _amount << ";created\n";
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:"<<  _accountIndex <<";amount:"<< _amount << ";closed\n";
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:"<<  _accountIndex <<";p_amount:"<< _amount << ";deposit:"<< deposit ;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << ";amount:" << _amount << ";nb_deposits:"<<_nbDeposits<<"\n";
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:"<<  _accountIndex <<";p_amount:"<< _amount;
	if (_amount >= withdrawal)
	{
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_amount -=  withdrawal;
		std::cout << "withdrawal:"<<  withdrawal <<";amount:"<< _amount << ";nb_withdrawals:" <<  _nbWithdrawals<<"\n";
		return true;
	}
	std::cout << ";withdrawal:refused\n";
	return false;
}

int	Account::checkAmount(void) const
{
	return 0;
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:"<<  _accountIndex <<";amount:"<< _amount << ";deposits:" << _totalNbDeposits<<";withdrawals:" << _totalNbWithdrawals << "\n";
}

void Account::_displayTimestamp(void)
{
	long	rawtime;
	struct	tm * timeinfo;
	char	buff[20];

	rawtime = time(NULL);
	timeinfo = localtime(&rawtime);
	strftime (buff, 20, "%Y%m%d_%H%M%S", timeinfo);
	std::cout << "[" << buff << "] ";
}
