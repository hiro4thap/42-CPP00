/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 17:59:32 by hiono             #+#    #+#             */
/*   Updated: 2024/05/19 18:33:36 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class PhoneBook
{
	public:
		void	Add(char *fn, char *ln, char *nn, char *pn, char *ds)
		{
			// validate input
			if (!*fn | !*ln, !*nn, !*pn, !*ds)
			{
				std::cout << "fill all the fields of contact" << std::endl;
				return ;
			}
			// create instance
			contacts[index] = Contact::Contact(fn, ln, nn, pn, ds);
			// add index
			index = (index + 1) % 8;
		};

		Search(int index)
		{
			Contact::Contact contact;
			contact = contacts[index];
			display_header();
			// display each element
			contact.
		};

	private:
		Contact::Contact	*contacts[8];
		int					index = 0;
}
