/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 14:50:17 by mmorente          #+#    #+#             */
/*   Updated: 2026/10/02 15:23:48 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog(void): WrongAnimal()
{
  _type = "Wrong dog";
}

WrongDog::WrongDog(const WrongDog &other) : WrongAnimal(other)
{
  std::cout << "Wrong dog copy constructor called" << std::endl;
}

WrongDog &WrongDog::operator=(const WrongDog &other)
{
  std::cout << "Wrong dog copy assigment operator called" << std::endl;
  if (this != &other)
    WrongAnimal::operator=(other);
  return (*this);
}

WrongDog::~WrongDog(void)
{
  std::cout << "Wrong dog destroyed" << std::endl;
}

void WrongDog::makeSound() const
{
  std::cout << "BARK BARK" << std::endl;
}
