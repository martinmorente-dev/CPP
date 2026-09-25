/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 12:34:28 by mmorente          #+#    #+#             */
/*   Updated: 2026/09/25 14:43:38 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : Claptrap()
{
  std::cout << "FragTrap default constructor called" << std::endl;
  _hit_points = 100;
  _energy_points = 100;
  _attack_damage = 30;
}

FragTrap::FragTrap(std::string name) : Claptrap(name)
{
  std::cout << "FragTrap constructor called" << std::endl;
  this->_name = name;
  _hit_points = 100;
  _energy_points = 100;
  _attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &fragtrap) : Claptrap(fragtrap)
{
  std::cout << "FragTrap copy constructor called" << std::endl;
  *this = fragtrap;
}

FragTrap &FragTrap::operator=(const FragTrap &fragtrap)
{
  std::cout << "FragTrap overload assign operator called" << std::endl;
  if (this != &fragtrap)
    Claptrap::operator=(fragtrap);
  return (*this);
}

FragTrap::~FragTrap(void)
{
  std::cout << "FragTrap " << _name << " destroyed" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
  if (_energy_points <= 0 || _hit_points <= 0)
  {
    std::cout << "FragTrap can't attack: no energy points or hit points left" << std::endl;
    return ;
  }
  std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage." << std::endl;
  _energy_points--;
}

void	FragTrap::takeDamage(unsigned int amount)
{
 if (_hit_points <= 0)
  {
    std::cout << "FragTrap " << _name
              << " can't recibe damage: no hit points left" << std::endl;
    return ;
  }

  _hit_points -= amount;
  std::cout << "FragTrap " << _name << " recieved "
            << amount << " damage " << _hit_points << " left" << std::endl; 

}

void FragTrap::beRepaired(unsigned int amount)
{
  if (_energy_points <= 0 || _hit_points <= 0)
  {
    std::cout << "FragTrap " << _name
              << " can't repair itself: no energy or hit points left" << std::endl;
    return ;
  }

  _hit_points += amount;
  std::cout << "FragTrap " << _name << " repair " << amount << " points!!" << std::endl;
}

void FragTrap::highFiveGuys()
{
	if (_energy_points <= 0 || _hit_points <= 0)
	{
		std::cout << "FragTrap " << _name
				  << " can't give a high five because no energy or hit points left";
		return ;
	}
	std::cout << "FragTrap " << _name << " wants a high five" << std::endl;
}
