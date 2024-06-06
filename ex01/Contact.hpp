/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 19:38:23 by hiono             #+#    #+#             */
/*   Updated: 2024/06/06 16:51:44 by hiono            ###   ########.fr       */
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
		Contact();
		~Contact();
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickName();
		std::string	getPhoneNumber();
		std::string	getDarkestSecret();
		void	setFirstName(std::string fn);
		void	setLastName(std::string ln);
		void	setNickName(std::string nn);
		void	setPhoneNumber(std::string pn);
		void	setDarkestSecret(std::string ds);

	private:
		std::string	first_name_;
		std::string	last_name_;
		std::string	nickname_;
		std::string	phone_number_;
		std::string	darkest_secret_;
};

#endif
