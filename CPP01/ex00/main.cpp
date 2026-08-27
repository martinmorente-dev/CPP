/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 10:46:20 by mmorente          #+#    #+#             */
/*   Updated: 2026/08/27 10:58:59 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie* zombie;

	std::cout << "Zombie created with the newZombie function" << std::endl;
	zombie = newZombie("Adam");

	zombie->announce();
	zombie->~Zombie();
	delete(zombie);

	std::cout << "Zombie created with randomChump" << std::endl;
	randomChump("Cletus");
	return (0);
}
