/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 15:21:19 by hiono             #+#    #+#             */
/*   Updated: 2024/05/19 17:10:26 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <cstdio>

void	putstr(char *str)
{
	size_t	i;

	i = 0;
    while (i < std::strlen(str))
	{
        putchar(toupper(str[i]));
		i++;
	}
}

int main(int argc, char *argv[])
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < argc; i++)
		putstr(argv[i]);
	std::cout << std::endl;
    return 0;
}
