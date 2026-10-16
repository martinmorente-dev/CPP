/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 14:50:17 by mmorente          #+#    #+#             */
/*   Updated: 2026/10/16 17:54:12 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void): AAnimal()
{
  _type = "Dog";
  _brain = new Brain();
}

Dog::Dog(const Dog &other) : AAnimal(other)
{
  std::cout << "Dog copy constructor called" << std::endl;
  this->_brain = new Brain(*other._brain);
}

Dog &Dog::operator=(const Dog &other)
{
  std::cout << "Dog copy assigment operator called" << std::endl;
  if (this != &other)
  {
    AAnimal::operator=(other);
    delete this->_brain;
    this->_brain = new Brain(*other._brain);
  }
  return (*this);
}

Dog::~Dog(void)
{
  delete this->_brain;
  std::cout << "Dog destroyed" << std::endl;
}

void Dog::makeSound() const
{
  std::cout << "BARK BARK" << std::endl;
}

Brain *Dog::getBrain()
{
  return (_brain);
}
