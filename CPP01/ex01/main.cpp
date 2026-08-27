/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 10:46:20 by mmorente          #+#    #+#             */
/*   Updated: 2026/08/27 12:05:13 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>

static int	stringToNumber(std::string input);


int	main(void)
{
	Zombie *horde;
	std::string input;
	int			n;

	std::cout << "Introduce a number to create the orde" << std::endl;
	std::getline(std::cin, input);
	if (std::cin.eof())
		return (1);

	n = stringToNumber(input);
	if (n < 0)
	{
		std::cout << "The input introduced is not a number or is negative" << std::endl;
		return (1);
	}
	horde = zombieHorde(n, "Adam");
	for(int i = 0; i < n; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}

int	stringToNumber(std::string input)
{

	int	n;
	
	std::istringstream iss(input);
	iss >> n;

	if (iss.fail())
		return (-1);

	return (n);
}
