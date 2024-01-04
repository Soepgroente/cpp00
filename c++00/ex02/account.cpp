#include "Account.hpp"
#include <iostream>

Account::Account(int initial_deposit)
{
	_nbAccounts = 0;
	_totalAmount = getTotalAmount();
	_totalNbDeposits = getNbDeposits();
	_totalNbWithdrawals = 0;
	_accountIndex = 0;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}

Account::~Account(void)
{

}

int	Account::getNbAccounts(void)
{

}

int	Account::getTotalAmount(void)
{

}

int	Account::getNbDeposits(void)
{

}

int	Account::getNbWithdrawals(void)
{

}

void	Account::displayAccountsInfos(void)
{

}

void	Account::makeDeposit(int deposit)
{

}

bool	Account::makeWithdrawal(int withdrawal)
{

}

int		Account::checkAmount(void) const
{

}

void	Account::displayStatus(void) const
{

}

void	Account::_displayTimestamp(void)
{

}

Account::Account(void)
{
	_nbAccounts = 0;
	_totalAmount = 0;
	_totalNbDeposits = 0;
	_totalNbWithdrawals = 0;
	_accountIndex = 0;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}