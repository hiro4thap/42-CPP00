/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 17:59:32 by hiono             #+#    #+#             */
/*   Updated: 2024/05/19 20:12:17 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.hpp"
#include "./Contact.hpp"

PhoneBook::PhoneBook()
{
	contacts = (Contact *)malloc(sizeof(std::string) * 8);
	index = 0;
}

void	PhoneBook::Add(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds)
{
	if (fn.empty() | ln.empty() | nn.empty() | pn.empty() | ds.empty())
	{
		std::cout << "fill all the fields of contact" << std::endl;
		return ;
	}
	contacts[index] = Contact(fn, ln, nn, pn, ds);
	index = (index + 1) % 8;
}

void	PhoneBook::Search(int index)
{
	//Contact::Contact contact;
	(void)index;
	PrintContacts();
}

void	PhoneBook::PrintHeader()
{
	std::cout << std::setw(10);
	std::cout << "index" << "|";
	std::cout << "first name" << "|";
	std::cout << "last name" << "|";
	std::cout << "nickname";
	std::cout << std::endl;
}

void	PhoneBook::PrintContacts()
{
	int	i;
	
	i = 0;
	while (!contacts[i])
	{
		std::cout << std::setw(10);
		std::cout << i << "|";
		std::cout << contacts[i].getFirstName() << "|";
		std::cout << contacts[i].getLastName() << "|";
		std::cout << contacts[i].getNickName();
		std::cout << std::endl;
		i++;
	}
}
