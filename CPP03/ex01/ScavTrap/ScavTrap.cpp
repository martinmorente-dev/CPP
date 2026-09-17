/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 12:34:28 by mmorente          #+#    #+#             */
/*   Updated: 2026/09/17 12:55:07 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : Claptrap()
{
  std::cout << "ScavTrap default constructor called" << std::endl;
  _hit_points = 100;
  _energy_points = 50;
  _attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : Claptrap(name)
{
  std::cout << "ScavTrap constructor called" << std::endl;
  this->_name = name;
  _hit_points = 100;
  _energy_points = 50;
  _attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap) : Claptrap(scavtrap)
{
  std::cout << "ScavTrap copy constructor called" << std::endl;
  *this = scavtrap;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap)
{
  std::cout << "ScavTrap overload assign operator called" << std::endl;
  if (this != &scavtrap)
    Claptrap::operator=(scavtrap);
  return (*this);
}

ScavTrap::~ScavTrap(void)
{
  std::cout << "ScavTrap " << _name << " destroyed" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
  if (_energy_points <= 0 || _hit_points <= 0)
  {
    std::cout << "ScavTrap can't attack: no energy points or hit points left" << std::endl;
    return ;
  }
  std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage." << std::endl;
  _energy_points--;
}

void ScavTrap::guardGate(void)
{
  if (_hit_points <= 0)
  {
    std::cout << "ScavTrap " << _name << "can't guard gate: no hit points left" << std::endl;
    return ;
  }
  std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}
