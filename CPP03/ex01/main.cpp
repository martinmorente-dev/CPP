/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 13:18:20 by mmorente          #+#    #+#             */
/*   Updated: 2026/09/15 13:34:52 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"

int main(void)
{
  Claptrap c1 = Claptrap("Pepito");
  Claptrap c2 = Claptrap("Pinocho");

  c1.attack(c2.getName());
  c2.takeDamage(0);
  c2.beRepaired(3);
  c2.attack(c1.getName());
  c1.takeDamage(0);

  return (0);
}
