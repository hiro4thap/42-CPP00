/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 17:59:32 by hiono             #+#    #+#             */
/*   Updated: 2024/05/21 16:55:52 by vboxuser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.hpp"
#include "./Contact.hpp"

PhoneBook::PhoneBook()
{
	index_ = 0;
}

void	PhoneBook::Add()
{
	std::string	input;
	Contact		contact;

	contact = Contact();
	std::cout << "first name: ";
	if (std::getline(std::cin, input) && input != "")
		contact.setFirstName(input);
	
	std::cout << "last name: ";
	if (std::getline(std::cin, input) && input != "")
		contact.setLastName(input);
	
	std::cout << "nickname: ";
	if (std::getline(std::cin, input) && input != "")
		contact.setNickName(input);
	
	std::cout << "phone number: ";
	if (std::getline(std::cin, input) && input != "")
		contact.setPhoneNumber(input);
	
	std::cout << std::setw(15) << "darkest secret: ";
	if (std::getline(std::cin, input) && input != "")
		contact.setDarkestSecret(input);
	
	contacts_[index_] = contact;
	index_ = (index_ + 1) % 8;
	std::cout << "A NEW CONTACT IS ADDED" << std::endl << std::endl;
}

void	PhoneBook::Search()
{
	PrintContacts();
	std::cout << "Enter index: ";
	if (std::getline(std::cin, input) && 0 <= input && input <= 7)
	{
		PrintHeader();
		PrintContact(input);
	}
}

void	PhoneBook::Exit()
{
	std::string input;

	exit(EXIT_SUCCESS);
}

void	PhoneBook::PrintHeader()
{
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname";
	std::cout << std::endl;
}

void	PhoneBook::PrintContact(int index)
{
	std::cout << std::setw(10) << index << "|";
	std::cout << std::setw(10) << contacts_[index].getFirstName() << "|";
	std::cout << std::setw(10) << contacts_[index].getLastName() << "|";
	std::cout << std::setw(10) << contacts_[index].getNickName();
	std::cout << std::setw(10) << std::endl;
}

void	PhoneBook::PrintContacts()
{
	int	i;
	
	PrintHeader();
	i = 0;
	while (!contacts_[i].getFirstName().empty())
	{
		PrintContact(i);
		i++;
	}
	std::cout << std::endl;
}
