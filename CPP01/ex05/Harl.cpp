/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 12:19:56 by mmorente          #+#    #+#             */
/*   Updated: 2026/09/02 14:09:25 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void  Harl::_debug(void)
{
  std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void  Harl::_info(void)
{
  std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::_warning(void)
{
  std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::_error(void)
{
  std::cout << "This is unacceptable! I want to speak to the manager now" << std::endl;
}

void  Harl::complain(std::string level)
{
  std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  t_harl  funcs[4] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};

  for(int i = 0; i < 4; i++)
  {
    if (levels[i] == level)
      (this->*funcs[i])();
  }
}
