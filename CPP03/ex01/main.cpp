/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 13:18:20 by mmorente          #+#    #+#             */
/*   Updated: 2026/09/17 12:50:04 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(void)
{
  ScavTrap sc1 = ScavTrap("paco");
  ScavTrap sc2 = ScavTrap("pepe");
  Claptrap c1 = Claptrap("Luis");

  sc1.attack(sc2.getName());
  sc2.guardGate();
  sc1.guardGate();
  c1.beRepaired(20);

  return (0);
}
