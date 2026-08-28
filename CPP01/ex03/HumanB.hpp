/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 11:22:49 by mmorente          #+#    #+#             */
/*   Updated: 2026/08/28 11:53:57 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
  private:
    std::string _name;
    Weapon*      _weapon;

  public:
    HumanB(std::string name);

    void setWeapon(Weapon& weapon);

    void  attack(void);
};

#endif
