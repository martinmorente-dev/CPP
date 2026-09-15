/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Claptrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 12:23:51 by mmorente          #+#    #+#             */
/*   Updated: 2026/09/15 13:35:31 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Claptrap.hpp"

Claptrap::Claptrap(void)
{
  std::cout << "Default Claptrap constructor called" << std::endl;
  _hit_points = 10;
  _energy_points = 10;
  _attack_damage = 0;
}

Claptrap::Claptrap(std::string name)
{
  std::cout << "Claptrap constructor called" << std::endl;
  this->_name = name;
  _hit_points = 10;
  _energy_points = 10;
  _attack_damage = 0;
}

Claptrap::Claptrap(const Claptrap &other)
{
  std::cout << "Copy constructor called" << std::endl;
  *this = other;
}

Claptrap &Claptrap::operator=(const Claptrap &other)
{
  std::cout << "ClapTrap copy assignment operator called" << std::endl;
  _name = other._name;
  _attack_damage = other._attack_damage;
  _energy_points = other._energy_points;
  _hit_points = other._hit_points;
  
  return (*this);
}

Claptrap::~Claptrap(void)
{
  std::cout << "Claptrap " << _name << " destroyed" << std::endl;
}

void  Claptrap::attack(const std::string &target)
{
  if (_hit_points <= 0 || _energy_points <= 0)
  {
    std::cout << "Claptrap " << _name
              << " can't attack: no hit points or energy left" << std::endl;
    return ;
  }

  std::cout << "Claptrap " << _name << " attacks "
            << target << ", causing " << _attack_damage << " points of damage!" << std::endl;
  _energy_points--;
}

void Claptrap::takeDamage(unsigned int amount)
{
  if (_hit_points <= 0)
  {
    std::cout << "Claptrap " << _name
              << " can't recibe damage: no hit points left" << std::endl;
    return ;
  }

  _hit_points -= amount;
  std::cout << "Claptrap " << _name << " recieved "
            << _attack_damage << " damage " << _hit_points << " left" << std::endl; 
}

void Claptrap::beRepaired(unsigned int amount)
{
  if (_energy_points <= 0 || _hit_points <= 0)
  {
    std::cout << "Claptrap " << _name
              << " can't repair itself: no energy or hit points left" << std::endl;
    return ;
  }

  _hit_points += amount;
  std::cout << "Claptrap " << _name << " repair " << amount << " points!!" << std::endl;
}

std::string Claptrap::getName(void)
{
  return (_name);
}
