/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 10:37:43 by mmorente          #+#    #+#             */
/*   Updated: 2026/08/28 10:59:30 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
  this->type = type;
}

std::string Weapon::getType(void) const
{
  return (this->type);
}

void    Weapon::setType(std::string type)
{
  this->type = type;
}
