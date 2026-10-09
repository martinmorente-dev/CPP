/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 14:17:23 by mmorente          #+#    #+#             */
/*   Updated: 2026/10/02 15:08:50 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
protected:
  std::string _type;

public:
  Animal(void);
  Animal(const Animal &other);
  Animal &operator=(const Animal &other);
  virtual ~Animal(void);

  std::string getType(void) const;
  virtual void makeSound(void) const;
};

#endif
