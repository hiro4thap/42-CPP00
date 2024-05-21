/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 14:16:08 by vboxuser          #+#    #+#             */
/*   Updated: 2024/05/21 16:29:46 by vboxuser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Contact.hpp"
#include "./PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phone_book;
	std::string	input;

	phone_book = PhoneBook();
	std::cout << "Enter a charcter to operate" << std::endl;
	std::cout << "a: add a contact to phonebook" << std::endl;
	std::cout << "s: search a contact" << std::endl;
	std::cout << "e: exit program" << std::endl;
	while(true)
	{
		std::cout << "Enter the action > ";
		std::getline(std::cin, input);
		if (input == "a")
			phone_book.Add();
		else if (input == "s")
			phone_book.Search();
		else if (input == "e")
			phone_book.Exit();
		else
			std::cout << "Input is invalid, Try again" << std::endl;
	}			
	return 0;
}
