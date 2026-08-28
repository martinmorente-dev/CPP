/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 11:26:05 by mmorente          #+#    #+#             */
/*   Updated: 2026/08/28 11:56:03 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(NULL) {}

void  HumanB::setWeapon(Weapon& weapon)
{
  this->_weapon = &weapon;
}

void  HumanB::attack(void)
{
  std::cout << _name << " attacks with their weapon " << _weapon->getType() << std::endl;
}
