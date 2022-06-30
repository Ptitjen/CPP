/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeulliot <jeulliot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 15:10:06 by jeulliot          #+#    #+#             */
/*   Updated: 2022/06/29 17:12:34 by jeulliot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    this->_amount = initial_deposit;
    this->_nbWithdrawals = 0;    
    _totalAmount += initial_deposit;
    this->_accountIndex = _nbAccounts;
    _nbAccounts ++;
    this->_displayTimestamp();    
    std::cout << " index:" << this->_accountIndex;
    std::cout << ";amount:" << this->_amount << ";created" << std::endl;
    return;
}

/* destroying order depends on compiler*/
Account::~Account(void)
{    
    this->_displayTimestamp();  
    std::cout << " index:" << this->_accountIndex;
    std::cout << ";amount:" << this->_amount << ";closed" << std::endl;
    return;
}

int Account::getNbAccounts(void)
{
    return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
    return(_totalAmount);
}

int Account::getNbDeposits(void)
{
    return(_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return(_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << " accounts:" << getNbAccounts();
    std::cout << ";total:" << getTotalAmount();
    std::cout << ";deposits:" << getNbDeposits();
    std::cout << ";withdrawals:" << getNbWithdrawals();      
    std::cout << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    this->_displayTimestamp();
    std::cout << " index:" << this->_accountIndex;
    std::cout << ";p_amount:" << this->_amount;
    std::cout << ";deposit:" << deposit;
    this->_amount += deposit;
    std::cout << ";amount:" << this->_amount;
    this->_nbDeposits ++;     
    std::cout << ";nb_deposits:" << this->_nbDeposits;
    std::cout << std::endl;   
    _totalNbDeposits++;
    _totalAmount += deposit;
    return;
}
bool	Account::makeWithdrawal( int withdrawal )
{
    this->_displayTimestamp();
    std::cout << " index:" << this->_accountIndex;
    std::cout << ";p_amount:" << this->_amount;
    if (this->_amount >= withdrawal)
    {
        this->_amount -= withdrawal;
        this->_nbWithdrawals ++;
        _totalNbWithdrawals ++;
        _totalAmount -= withdrawal;
        std::cout << ";withdrawal:" << withdrawal;
        std::cout << ";amount:" << this->_amount;
        std::cout << ";nb_withdrawals:" << this->_nbWithdrawals;
    }
    else    
        std::cout << ";withdrawal:refused";    
    std::cout << std::endl;  
    return (this->_amount >= withdrawal);
}

int		Account::checkAmount( void ) const
{
    return (this->_amount);
}

void	Account::displayStatus( void ) const
{
    this->_displayTimestamp();
    std::cout << " index:" << this->_accountIndex;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";deposits:" << this->_nbDeposits;
    std::cout << ";withdrawals:" << this->_nbWithdrawals;      
    std::cout << std::endl;
    return;
}

/* To test with diff : std::cout <<"[19920104_091532]"; */
void	Account::_displayTimestamp( void )
{
    std::time_t now = std::time(nullptr);
    tm *ltm = localtime(&now);
    std::cout << "[" << 1900+ltm->tm_year;
    if (1 + ltm->tm_mon < 10)
        std::cout << "0";
    std::cout << 1 + ltm->tm_mon;
    if (ltm->tm_mday < 10)
        std::cout << "0";
    std::cout << ltm->tm_mday << "_";
    if (ltm->tm_hour < 10)
        std::cout << "0";
    std::cout << ltm->tm_hour;
    if (ltm->tm_min < 10)
        std::cout << "0";
    std::cout << ltm->tm_min;
    if (ltm->tm_sec < 10)
        std::cout << "0";
    std::cout << ltm->tm_sec << "]";
    return;
}