/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:16:08 by vboxuser          #+#    #+#             */
/*   Updated: 2024/05/24 17:35:24 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Contact.hpp"
#include "./PhoneBook.hpp"

void	PrintInstruction(void)
{
	std::cout << "Operation List" << std::endl;
	std::cout << " - ADD    : add a contact to phonebook" << std::endl;
	std::cout << " - SEARCH : display and search contact" << std::endl;
	std::cout << " - EXIT   : exit program" << std::endl << std::endl;
}

int	main(void)
{
	PhoneBook	phone_book;
	std::string	input;

	phone_book = PhoneBook();
	PrintInstruction();
	while(true)
	{
		std::cout << "Enter operation : ";
		std::getline(std::cin, input);
		if (input == "ADD")
			phone_book.Add();
		else if (input == "SEARCH")
			phone_book.Search();
		else if (input == "EXIT")
			break ;
		else
		{
			std::cout << "Invalid input. Enter a valid operation." << std::endl;
			PrintInstruction();
		}
	}			
	return 0;
}
