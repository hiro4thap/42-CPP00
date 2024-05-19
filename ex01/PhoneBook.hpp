/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 19:35:37 by hiono             #+#    #+#             */
/*   Updated: 2024/05/19 20:11:23 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include <cstring>
# include <cstdio>
# include <iostream>
# include <iomanip>
# include "./Contact.hpp"

class PhoneBook
{
	public:
		PhoneBook();
		void	Add(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds);
		void	Search(int index);

	private:
		Contact	*contacts;
		int		index;
		void	PrintHeader();
		void	PrintContacts();
};

#endif
