/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 10:31:01 by mmorente          #+#    #+#             */
/*   Updated: 2026/08/27 11:38:43 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <cctype>

class Zombie
{
	
	private:
		std::string _name;

	public:
		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);

		// Setters & Getters
		void setZombieName(std::string name);

		// Principal functions
		void	announce(void);
};

	Zombie*	zombieHorde(int N, std::string name);

#endif