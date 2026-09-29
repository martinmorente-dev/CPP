/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 13:03:18 by mmorente          #+#    #+#             */
/*   Updated: 2026/09/29 13:37:27 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "../FragTrap/FragTrap.hpp"
# include "../ScavTrap/ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
  private:
    std::string _name;

  public:
    DiamondTrap(void);
    DiamondTrap(std::string name);
    DiamondTrap(const DiamondTrap &diamontrap);
    DiamondTrap &operator=(const DiamondTrap &other);
    ~DiamondTrap(void);

    void  whoami(void);
    void  attack(std::string const &target);
    void  takeDamage(int amount);
    void  beRepaired(int amount);
};

#endif
