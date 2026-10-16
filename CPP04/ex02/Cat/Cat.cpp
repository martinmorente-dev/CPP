/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 15:02:05 by mmorente          #+#    #+#             */
/*   Updated: 2026/10/16 17:53:59 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
  _type = "Cat";
  _brain = new Brain();
}

Cat::Cat(const Cat &other) : AAnimal(other)
{
  std::cout << "Cat copy constructor called" << std::endl;
  _brain = new Brain(*other._brain);
}

Cat &Cat::operator=(const Cat &other)
{
  if (this != &other)
  {
    AAnimal::operator=(other);
    delete this->_brain;
    this->_brain = new Brain(*other._brain);
  }
  std::cout << "Cat copy assigment operator called" << std::endl;
  return (*this);
}

Cat::~Cat(void)
{
  delete this->_brain;
  std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound(void) const
{
  std::cout << "MEOW MEOW" << std::endl;
}

Brain *Cat::getBrain()
{
  return (_brain);
}
