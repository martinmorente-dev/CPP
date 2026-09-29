/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 13:11:55 by mmorente          #+#    #+#             */
/*   Updated: 2026/09/29 13:38:07 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): Claptrap(), ScavTrap(), FragTrap(), _name("DiamondTrap")
{
  this->_attack_damage = FragTrap::_attack_damage;
  this->_hit_points = FragTrap::_hit_points;
  this->_energy_points = ScavTrap::_energy_points;
  std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): Claptrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
  this->_attack_damage = FragTrap::_attack_damage;
  this->_hit_points = FragTrap::_hit_points;
  this->_energy_points = ScavTrap::_energy_points;
  std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamontrap): Claptrap(diamontrap), ScavTrap(diamontrap), FragTrap(diamontrap), _name(diamontrap._name)
{
  std::cout << "DiamondTrap " << this->_name << " copy constructor called " << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
  if (this != &other)
  {
    Claptrap::operator=(other);
    this->_name = other._name;
  }
  std::cout << "DiamondTrap " << this->_name << " assignation operator called" << std::endl;
  return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
  std::cout << "DiamondTrap " << this->_name << " destroyed" << std::endl;
}

void DiamondTrap::whoami(void)
{
  std::cout << "My name is " << this->_name << std::endl;
  std::cout << "My claptrap name is " << Claptrap::_name << std::endl;
}

void DiamondTrap::attack(std::string const &target)
{
  ScavTrap::attack(target);
}

void DiamondTrap::takeDamage(int amount)
{
  Claptrap::takeDamage(amount);
}

void DiamondTrap::beRepaired(int amount)
{
  Claptrap::beRepaired(amount);
}
