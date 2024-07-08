/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntalmon <ntalmon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 10:28:52 by ntalmon           #+#    #+#             */
/*   Updated: 2024/07/08 16:45:34 by ntalmon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ) {

	return _nbAccounts;
}

int	Account::getTotalAmount( void ) {

	return _totalAmount;
}

int	Account::getNbDeposits( void ) {

	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {

	return _totalNbWithdrawals;
}
