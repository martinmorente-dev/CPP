/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 14:39:18 by mmorente          #+#    #+#             */
/*   Updated: 2026/10/16 17:51:40 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::~AAnimal(void)
{
  std::cout << "Animal destroyed" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
  if (this != &other)
    _type = other._type;
  std::cout << "Animal copy assigment operator called" << std::endl;
  return (*this);
}

std::string AAnimal::getType(void) const
{
  return (_type);
}

void AAnimal::makeSound(void) const
{ 
  std::cout << "Silence..." << std::endl;
}
