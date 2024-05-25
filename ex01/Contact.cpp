/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 18:03:18 by hiono             #+#    #+#             */
/*   Updated: 2024/05/25 15:35:17 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.hpp"
#include "./Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string	Contact::getFirstName()
{
	return first_name_;
}

std::string	Contact::getLastName()
{
	return last_name_;
}

std::string	Contact::getNickName()
{
	return nickname_;
}

void	Contact::setFirstName(std::string fn)
{
	first_name_ = fn;
}

void	Contact::setLastName(std::string ln)
{
	last_name_ = ln;
}

void	Contact::setNickName(std::string nn)
{
	nickname_ = nn;
}

void	Contact::setPhoneNumber(std::string pn)
{
	phone_number_ = pn;
}

void	Contact::setDarkestSecret(std::string ds)
{
	darkest_secret_ = ds;
}
