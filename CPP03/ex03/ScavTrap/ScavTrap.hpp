/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 14:26:03 by mmorente          #+#    #+#             */
/*   Updated: 2026/09/29 13:02:39 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "../Claptrap/Claptrap.hpp"

class ScavTrap : public virtual Claptrap
{
  public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &other);
    ScavTrap &operator=(const ScavTrap &scaptrap);
    ~ScavTrap(void);

    void  attack(const std::string &target);
	void  takeDamage(unsigned int amount);
	void  beRepaired(unsigned int amount);
    void  guardGate(void);
};

#endif
