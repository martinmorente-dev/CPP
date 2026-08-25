/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/25 11:37:52 by mmorente          #+#    #+#             */
/*   Updated: 2026/08/25 14:42:50 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int innitial_deposit)
{
	_accountIndex = _nbAccounts;
	_amount = innitial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	
	_nbAccounts++;
	_totalAmount += innitial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";amount:" << _amount
			  << ";created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex
			  << ";amount:" << Account::checkAmount()
			  << ";closed" << std::endl;
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts()
			  << ";total:" << getTotalAmount()
			  << ";deposits:" << getNbDeposits()
			  << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << Account::_accountIndex
			  << ";amount:" << Account::checkAmount()
			  << ";deposits:" << Account::_nbDeposits
			  << ";withdrawals:" << Account::_nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	int	pamount = _amount;

	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits ++;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";p_amount:" << pamount
			  << ";deposit:" << deposit
			  << ";amount:" << _amount
			  << ";nb_deposits:" << _nbDeposits << std::endl;
}
bool	Account::makeWithdrawal(int withdrawal)
{
	int	p_amount = _amount;

	_displayTimestamp();
	if (withdrawal > _amount)
	{
		std::cout << "index:" << _accountIndex
				  << ";p_amount:" << p_amount
				  << ";withdrawal:" << "refused" << std::endl;
		return (false);
	}

	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;

	std::cout << "index:" << _accountIndex
			  << ";p_amount:" << p_amount
			  << ";withdrawal:" << withdrawal
			  << ";amount:" << _amount
			  << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

// Getters
int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}
int	Account::checkAmount(void) const
{
	return (_amount);
}

// Helper functions
void Account::_displayTimestamp(void)
{
	time_t		now;
	struct tm	*local_time;
	char		buffer[16];

	std::time(&now);
	local_time = std::localtime(&now);
	std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", local_time);

	std::cout << "[" << buffer  << "] ";
}