/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 14:26:03 by mmorente          #+#    #+#             */
/*   Updated: 2026/09/29 13:02:25 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "../Claptrap/Claptrap.hpp"

class FragTrap : public virtual Claptrap
{
  public:
    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(const FragTrap &other);
    FragTrap &operator=(const FragTrap &fragtrap);
    ~FragTrap(void);

    void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	highFiveGuys(void);
};

#endif
