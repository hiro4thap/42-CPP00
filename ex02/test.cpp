/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 13:47:54 by hiono             #+#    #+#             */
/*   Updated: 2024/06/06 15:29:56 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

int	main(void)
{
	Account::t	account0 = Account(42);
	Account::t	account1 = Account(54);
	Account::t	account2 = Account(957);
	Account::t	account3 = Account(432);
	Account::t	account4 = Account(1234);
	Account::t	account5 = Account(0);
	Account::t	account6 = Account(754);
	Account::t	account7 = Account(16576);
	Account::displayAccountsInfos();
	account0.displayStatus();
	account1.displayStatus();
	account2.displayStatus();
	account3.displayStatus();
	account4.displayStatus();
	account5.displayStatus();
	account6.displayStatus();
	account7.displayStatus();
	account0.makeDeposit(5);
	account1.makeDeposit(765);
	account2.makeDeposit(564);
	account3.makeDeposit(2);
	account4.makeDeposit(87);
	account5.makeDeposit(23);
	account6.makeDeposit(9);
	account7.makeDeposit(20);
	Account::displayAccountsInfos();
	account0.displayStatus();
	account1.displayStatus();
	account2.displayStatus();
	account3.displayStatus();
	account4.displayStatus();
	account5.displayStatus();
	account6.displayStatus();
	account7.displayStatus();
	account0.makeWithdrawal(100);
	account1.makeWithdrawal(34);
	account2.makeWithdrawal(657);
	account3.makeWithdrawal(4);
	account4.makeWithdrawal(76);
	account5.makeWithdrawal(100);
	account6.makeWithdrawal(657);
	account7.makeWithdrawal(7654);
	Account::displayAccountsInfos();
	account0.displayStatus();
	account1.displayStatus();
	account2.displayStatus();
	account3.displayStatus();
	account4.displayStatus();
	account5.displayStatus();
	account6.displayStatus();
	account7.displayStatus();
}
