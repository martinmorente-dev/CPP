/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 16:18:42 by mmorente          #+#    #+#             */
/*   Updated: 2026/10/09 16:44:49 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
  private:
    std::string _ideas[100];

  public:
    Brain(void);
    Brain(const Brain &brain);
    Brain &operator=(const Brain &other);
    ~Brain(void);

    std::string getIdea(int position);
    void  setIdea(int position, std::string idea);
};

#endif
