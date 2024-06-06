/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 17:59:32 by hiono             #+#    #+#             */
/*   Updated: 2024/06/06 17:06:04 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.hpp"
#include "./Contact.hpp"
#include <sstream>

PhoneBook::PhoneBook()
{
	current_index_ = 0;
	max_index_ = -1;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::Add()
{
	std::string	input = "";
	Contact		contact = Contact();

	while (input.empty())
	{
		std::cout << std::left << std::setw(18) << " - first name" << " : ";
		if (std::getline(std::cin, input) && input.empty())
			std::cout << "Empty input. Enter characters." << "\n";
		contact.setFirstName(input);
	}
	input = "";
	while (input.empty())
	{
		std::cout << std::left << std::setw(18) << " - last name" << " : ";
		if (std::getline(std::cin, input) && input.empty())
			std::cout << "Empty input. Enter characters." << "\n";
		contact.setLastName(input);
	}
	input = "";
	while (input.empty())
	{
		std::cout << std::left << std::setw(18) << " - nickname" << " : ";
		if (std::getline(std::cin, input) && input.empty())
			std::cout << "Empty input. Enter characters." << "\n";
		contact.setNickName(input);
	}
	input = "";
	while (input.empty())
	{
		std::cout << std::left << std::setw(18) << " - phone number" << " : ";
		if (std::getline(std::cin, input) && input.empty())
			std::cout << "Empty input. Enter characters." << "\n";
		contact.setPhoneNumber(input);
	}
	input = "";
	while (input.empty())
	{
		std::cout << std::left << std::setw(18) << " - darkest secret" << " : ";
		if (std::getline(std::cin, input) && input.empty())
			std::cout << "Empty input. Enter characters." << "\n";
		contact.setDarkestSecret(input);
	}
	contacts_[current_index_] = contact;
	current_index_ = (current_index_ + 1) % 8;
	if (max_index_ < 7)
		max_index_++;
	std::cout << " A NEW CONTACT IS ADDED" << "\n" << "\n";
}

void	PhoneBook::Search()
{
	std::string input;
	int			index;

	if (max_index_ == -1)
	{
		std::cout << "No contact found. Add contact first." << "\n";
		return ;
	}
	PrintContacts();
	while (true)
	{
		std::cout << "Enter index: ";
		std::getline(std::cin, input);
		std::istringstream stream(input);
		stream >> index;
		if (stream.fail() || index < 1 || max_index_ + 1 < index || !stream.eof())
			std::cout << "Invalid input. Enter a number from 1 to " << max_index_ + 1 << "\n";
		else 
			break ;
	}
	PrintContact(index - 1);
	std::cout << "\n";
}

void	PhoneBook::PrintField(std::string str)
{
	if (str.length() <= 10)
		std::cout << std::setw(10) << str;
	else
	{
		str.resize(9);
		std::cout << str << '.';
	}
	std::cout << '|';
}

void	PhoneBook::PrintHeader()
{
	std::cout << " |";
	PrintField("index");
	PrintField("first name");
	PrintField("last name");
	PrintField("nickname");
	std::cout << "\n";
	std::cout << " |";
	PrintField("----------");
	PrintField("----------");
	PrintField("----------");
	PrintField("----------");
	std::cout << "\n";
}

void	PhoneBook::PrintContact(int index)
{
	std::cout << std::left << std::setw(18) << " - first name" << " : " << contacts_[index].getFirstName() << "\n";
	std::cout << std::left << std::setw(18) << " - last name" << " : " << contacts_[index].getLastName() << "\n";
	std::cout << std::left << std::setw(18) << " - nickname" << " : " << contacts_[index].getNickName() << "\n";
	std::cout << std::left << std::setw(18) << " - phone number " << " : " << contacts_[index].getPhoneNumber() << "\n";
	std::cout << std::left << std::setw(18) << " - darkest secret" << " : " << contacts_[index].getDarkestSecret() << "\n";
}

void	PhoneBook::PrintContacts()
{
	int	index = 0;
	
	PrintHeader();
	while (index <= max_index_)
	{
		std::cout << " |";
		std::cout << std::right << std::setw(10) << index + 1<< "|";
		PrintField(contacts_[index].getFirstName());
		PrintField(contacts_[index].getLastName());
		PrintField(contacts_[index].getNickName());
		std::cout << "\n";
		index++;
	}
	std::cout << "\n";
}
