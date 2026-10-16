/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 14:22:55 by mmorente          #+#    #+#             */
/*   Updated: 2026/10/09 17:06:38 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "../Animal/Animal.hpp"
# include "../Brain/Brain.hpp"

class Dog : public Animal
{
  private:
    Brain *_brain;

  public:
    Dog(void);
    Dog(const Dog &other);
    Dog&operator=(const Dog &other);
    ~Dog(void);

    virtual void makeSound(void) const;
    Brain *getBrain(void);
};

#endif
