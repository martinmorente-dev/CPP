/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 14:39:18 by mmorente          #+#    #+#             */
/*   Updated: 2026/10/02 15:18:40 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
  std::cout << "Wrong animal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : _type(other._type)
{
  std::cout << "Wrong animal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
  std::cout << "Wrong animal destroyed" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
  if (this != &other)
    _type = other._type;
  std::cout << "Wrong animal copy assigment operator called" << std::endl;
  return (*this);
}

std::string WrongAnimal::getType(void) const
{
  return (_type);
}

void WrongAnimal::makeSound(void) const
{
  std::cout << "Silence..." << std::endl;
}
