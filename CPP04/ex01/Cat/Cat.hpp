/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 14:59:42 by mmorente          #+#    #+#             */
/*   Updated: 2026/10/09 17:07:01 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
  
# include "../Animal/Animal.hpp"
# include "../Brain/Brain.hpp"

  class Cat: public Animal
  {

    private:
      Brain *_brain;

    public:
      Cat(void);
      Cat(const Cat &other);
      Cat&operator=(const Cat &other);
      ~Cat(void);

      virtual void makeSound(void) const;
      Brain *getBrain(void);
  };

#endif
