/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 16:31:26 by mmorente          #+#    #+#             */
/*   Updated: 2026/10/09 16:43:23 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Brain.hpp"

Brain::Brain(void)
{
  std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &brain)
{
  std::cout << "Brain copy constructor called" << std::endl;
  if (this != &brain)
    *this = brain;
}

Brain &Brain::operator=(const Brain &other)
{
  std::cout << "Brain copy assignment operator called" << std::endl;
  if (this != &other)
  {
    int i = -1;
    while (i <= 99)
      _ideas[i] = other._ideas[i];
  }
  return (*this);
}

Brain::~Brain(void)
{
  std::cout << "Brain destructor called" << std::endl;
}

std::string Brain::getIdea(int position)
{
  if (position >= 0 && position <= 100)
    return (_ideas[position]);
  return ("");
}

void  Brain::setIdea(int position, std::string idea)
{
  if (position >= 0 && position <= 100)
    _ideas[position] = idea;
}

