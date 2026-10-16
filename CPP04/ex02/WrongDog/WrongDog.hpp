/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 14:22:55 by mmorente          #+#    #+#             */
/*   Updated: 2026/10/02 15:25:54 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

# include "../WrongAnimal/WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
  public:
    WrongDog(void);
    WrongDog(const WrongDog &other);
    WrongDog&operator=(const WrongDog &other);
    ~WrongDog(void);

    void makeSound(void) const;
};

#endif
