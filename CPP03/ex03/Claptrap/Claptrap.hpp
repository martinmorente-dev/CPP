/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 12:11:12 by mmorente          #+#    #+#             */
/*   Updated: 2026/09/29 13:10:07 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <iostream>

  class Claptrap
{

    protected:
      std::string _name;
      int         _hit_points;
      int         _energy_points;
      int         _attack_damage;

    public:
      Claptrap(void);
      Claptrap(std::string name);
      Claptrap(const Claptrap &claptrap);
      Claptrap &operator=(const Claptrap &other);
      virtual ~Claptrap(void);

      void  attack(const std::string &target);
      void  takeDamage(unsigned int amount);
      void  beRepaired(unsigned int amount);
      std::string getName(void);
  };

#endif
