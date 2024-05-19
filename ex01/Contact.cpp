/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 18:03:18 by hiono             #+#    #+#             */
/*   Updated: 2024/05/19 18:31:11 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Contact
{
	public:
		Contact(char *fn, char *ln, char *nn, char *pn, char *ds)
		{
			first_name = fn;
			last_name = ln;
			nickname = nn;
			phone_number = pn;
			darkest_secret = ds;
		};

	private:
		char	*first_name;
		char	*last_name;
		char	*nickname;
		char	*phone_number;
		char	*darkest_secret;
}
