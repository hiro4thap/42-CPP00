/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:28:54 by hiono             #+#    #+#             */
/*   Updated: 2024/06/06 15:46:44 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int	Account::getNbAccounts(void) { return _nbAccounts; }
int	Account::getTotalAmount(void) { return _totalAmount; }
int	Account::getNbDeposits(void) { return _totalNbDeposits; }
int	Account::getNbWithdrawals(void) { return _totalNbWithdrawals; }

int	Account::_nbAccounts = 0;
int	Account::_totalAmount= 0;
int	Account::_totalNbDeposits= 0;
int	Account::_totalNbWithdrawals= 0;

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << " ";
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:" << _totalAmount << ";";
	std::cout << "deposits:" << _totalNbDeposits << ";";
	std::cout << "withdrawals:" << _totalNbWithdrawals << "\n";
}

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += _amount;
	_nbAccounts++;

	_displayTimestamp();
	std::cout << " ";
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "created" << "\n";

}

Account::~Account(void)
{
	_totalNbDeposits -= _amount;
	_nbAccounts--;

	_displayTimestamp();
	std::cout << " ";
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << "\n";
}

void	Account::makeDeposit(int deposit)
{
	int	p_amount = _amount;
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;

	_displayTimestamp();
	std::cout << " ";
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << p_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "nb_deposits:" << _nbDeposits << "\n";
}

bool	Account::makeWithdrawal(int withdrawal)
{
	int		p_amount = _amount;
	bool	can_withdraw = (withdrawal < _amount);

	if (can_withdraw)
	{
		_amount -= withdrawal;
		_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals--;

		_displayTimestamp();
		std::cout << " ";
		std::cout << "index:" << _accountIndex << ";";
		std::cout << "p_amount:" << p_amount << ";";
		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "amount:" << _amount << ";";
		std::cout << "nb_withdrawals:" << _nbWithdrawals << "\n";
	}
	else
	{
		_displayTimestamp();
		std::cout << " ";
		std::cout << "index:" << _accountIndex << ";";
		std::cout << "p_amount:" << p_amount << ";";
		std::cout << "withdrawal:" << "refused" << "\n";
	}
	return (can_withdraw);
}

int		Account::checkAmount(void) const { return _amount; }

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << " ";
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << "\n";
}

void	Account::_displayTimestamp(void)
{
    std::time_t result = std::time(NULL);

	std::cout << std::setfill('0') << "[";
	std::cout << 1900 + std::localtime(&result)->tm_year;
	std::cout << std::setw(2) << 1 + std::localtime(&result)->tm_mon;
	std::cout << std::setw(2) << std::localtime(&result)->tm_mday;
	std::cout << "_";
	std::cout << std::setw(2) << std::localtime(&result)->tm_hour;
	std::cout << std::setw(2) << std::localtime(&result)->tm_min;
	std::cout << std::setw(2) << std::localtime(&result)->tm_sec ;
	std::cout << "]";
}
