/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 14:59:42 by mmorente          #+#    #+#             */
/*   Updated: 2026/10/02 15:10:50 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
  
# include "../Animal/Animal.hpp"

  class Cat: public Animal
  {
    public:
      Cat(void);
      Cat(const Cat &other);
      Cat&operator=(const Cat &other);
      ~Cat(void);

      virtual void makeSound(void) const;
  };

#endif
