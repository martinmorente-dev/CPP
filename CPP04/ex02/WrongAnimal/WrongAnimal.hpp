/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 14:17:23 by mmorente          #+#    #+#             */
/*   Updated: 2026/10/02 15:25:43 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
protected:
  std::string _type;

public:
  WrongAnimal(void);
  WrongAnimal(const WrongAnimal &other);
  WrongAnimal &operator=(const WrongAnimal &other);
  virtual ~WrongAnimal(void);

  std::string getType(void) const;
  void makeSound(void) const;
};

#endif
