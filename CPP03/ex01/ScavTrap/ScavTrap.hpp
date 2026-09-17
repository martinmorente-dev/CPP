/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 14:26:03 by mmorente          #+#    #+#             */
/*   Updated: 2026/09/17 12:44:26 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "../main.hpp"

class ScavTrap : public Claptrap
{
  public:
    ScavTrap(void);
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &other);
    ScavTrap &operator=(const ScavTrap &scaptrap);
    ~ScavTrap(void);

    void  attack(const std::string &target);
    void  guardGate(void);
};

#endif
