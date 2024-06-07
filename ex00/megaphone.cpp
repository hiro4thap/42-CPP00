/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 15:21:19 by hiono             #+#    #+#             */
/*   Updated: 2024/06/07 15:53:34 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <cstdio>

void	putstrUpper(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
		std::cout << (char) toupper(str[i]);
}

int main(int argc, char *argv[])
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < argc; i++)
		putstrUpper(argv[i]);
	std::cout << "\n";
    return 0;
}
