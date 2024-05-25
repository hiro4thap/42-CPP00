/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 19:35:37 by hiono             #+#    #+#             */
/*   Updated: 2024/05/25 14:21:59 by hiono            ###   ########.fr       */
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
		~PhoneBook();
		void	Add();
		void	Search();

	private:
		Contact	contacts_[8];
		int		current_index_;
		int		max_index_;
		void	PrintHeader();
		void	PrintField(std::string);
		void	PrintContact(int index);
		void	PrintContacts();
};

#endif
