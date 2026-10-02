/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 15:02:05 by mmorente          #+#    #+#             */
/*   Updated: 2026/10/02 15:12:57 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
  _type = "Cat";
}

Cat::Cat(const Cat &other): Animal(other)
{
  std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
  if (this != &other)
    Animal::operator=(other);
  std::cout << "Cat copy assigment operator called" << std::endl;
  return (*this);
}

Cat::~Cat(void)
{
  std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
  std::cout << "MEOW MEOW" << std::endl;
}
