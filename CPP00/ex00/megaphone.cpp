/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 14:14:48 by mmorente          #+#    #+#             */
/*   Updated: 2026/08/27 14:14:55 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char *argv[])
{
	#ifndef (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
		return (0);
	}
	for(int i = 1; i < argc; i++)
	{
		for(int j = 0; argv[i][j] != '\0'; j++)
			std::cout << (char)std::toupper(argv[i][j]);
	}
	std::cout << "\n";
	return (0);
}
