/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 19:38:23 by hiono             #+#    #+#             */
/*   Updated: 2024/05/19 19:45:52 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <cstring>
# include <cstdio>
# include <iostream>

class Contact
{
	public:
		Contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds);
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickName();

	private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
};

#endif
