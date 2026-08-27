/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 10:31:01 by mmorente          #+#    #+#             */
/*   Updated: 2026/08/27 10:48:28 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	
	private:
		std::string _name;

	public:
		Zombie(std::string name);
		~Zombie(void);

		void	announce(void);
};

// Helper functions
Zombie* newZombie(std::string name);
void	randomChump(std::string name);


#endif