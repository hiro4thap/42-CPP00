/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 19:35:37 by hiono             #+#    #+#             */
/*   Updated: 2024/05/21 16:55:17 by vboxuser         ###   ########.fr       */
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
		void	Add();
		void	Search();
		void	Exit();

	private:
		Contact	contacts_[8];
		int		index_;
		void	PrintHeader();
		void	PrintContact(int index);
		void	PrintContacts();
};

#endif
