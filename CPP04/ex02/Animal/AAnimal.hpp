/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 14:17:23 by mmorente          #+#    #+#             */
/*   Updated: 2026/10/16 17:50:56 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class AAnimal
{
protected:
  std::string _type;

public:
  AAnimal &operator=(const AAnimal &other);
  virtual ~AAnimal(void) = 0;

  std::string getType(void) const;
  virtual void makeSound(void) const = 0;
};

#endif
