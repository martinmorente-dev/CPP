/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 11:00:19 by mmorente          #+#    #+#             */
/*   Updated: 2026/08/28 11:16:22 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <iostream>
 
class HumanA
 {
    private:
      std::string _name;
      Weapon&      _weapon;

    public:
      HumanA(std::string name, Weapon& weapon);

      void  attack(void);
 };

#endif
