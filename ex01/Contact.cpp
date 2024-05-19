/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 18:03:18 by hiono             #+#    #+#             */
/*   Updated: 2024/05/19 20:16:39 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.hpp"
#include "./Contact.hpp"

Contact::Contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds)
{
	first_name = fn;
	last_name = ln;
	nickname = nn;
	phone_number = pn;
	darkest_secret = ds;
}

std::string	Contact::getFirstName()
{
	return first_name;
}

std::string	Contact::getLastName()
{
	return last_name;
}

std::string	Contact::getNickName()
{
	return nickname;
}
