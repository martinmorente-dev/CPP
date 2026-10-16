/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 14:39:18 by mmorente          #+#    #+#             */
/*   Updated: 2026/10/16 17:37:55 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::~Animal(void)
{
  std::cout << "Animal destroyed" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
  if (this != &other)
    _type = other._type;
  std::cout << "Animal copy assigment operator called" << std::endl;
  return (*this);
}

std::string Animal::getType(void) const
{
  return (_type);
}

void Animal::makeSound(void) const
{ 
  std::cout << "Silence..." << std::endl;
}
