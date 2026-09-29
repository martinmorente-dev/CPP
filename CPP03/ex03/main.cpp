/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 13:18:20 by mmorente          #+#    #+#             */
/*   Updated: 2026/09/29 13:49:17 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(void)
{
  std::cout << "=== ScavTrap / ClapTrap / FragTrap ===" << std::endl;
	ScavTrap sc1 = ScavTrap("paco");
	ScavTrap sc2 = ScavTrap("pepe");
	Claptrap c1 = Claptrap("Luis");
	FragTrap fc1 = FragTrap("Er Bicho");

	sc1.attack(sc2.getName());
	sc2.takeDamage(20);
	sc2.guardGate();
	sc1.guardGate();
	fc1.attack(c1.getName());
	c1.takeDamage(30);
	fc1.highFiveGuys();
	c1.beRepaired(20);

	std::cout << std::endl << "=== DiamondTrap ===" << std::endl;

	DiamondTrap	dt1("Manolo");
	dt1.whoami();

	std::cout << std::endl << "--- Check the attack from ScavTrap ---" << std::endl;
	dt1.attack(sc1.getName());

	std::cout << std::endl << "--- Check highFiveGuys ---" << std::endl;
	dt1.highFiveGuys();

	std::cout << std::endl << "--- check the reinterpret ---" << std::endl;
	dt1.guardGate();

	std::cout << std::endl << "--- check takeDamage & beRepaired ---" << std::endl;
	dt1.takeDamage(50);
	dt1.beRepaired(10);

	std::cout << std::endl << "--- default constructor ---" << std::endl;
	DiamondTrap	dt2;
	dt2.whoami();

	std::cout << std::endl << "--- Copy constructor ---" << std::endl;
	DiamondTrap	dt3(dt1);
	dt3.whoami();

	std::cout << std::endl << "--- operator= ---" << std::endl;
	DiamondTrap	dt4("Temporal");
	dt4 = dt1;
	dt4.whoami();

	return (0);
}
