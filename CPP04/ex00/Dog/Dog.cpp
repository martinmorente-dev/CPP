/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 14:50:17 by mmorente          #+#    #+#             */
/*   Updated: 2026/10/02 14:58:18 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): Animal()
{
  _type = "Dog";
}

Dog::Dog(const Dog &other) : Animal(other)
{
  std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
  std::cout << "Dog copy assigment operator called" << std::endl;
  if (this != &other)
    Animal::operator=(other);
  return (*this);
}

Dog::~Dog(void)
{
  std::cout << "Dog destroyed" << std::endl;
}

void Dog::makeSound() const
{
  std::cout << "BARK BARK" << std::endl;
}
