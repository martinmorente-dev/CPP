/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 12:19:56 by mmorente          #+#    #+#             */
/*   Updated: 2026/09/03 11:29:59 by mmorente         ###   ########.fr       */
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
  std::cout << "I think I deserve to have some extra bacon for free. "<< std::endl;
  std:: cout << "I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::_error(void)
{
  std::cout << "This is unacceptable! I want to speak to the manager now" << std::endl;
}

void  Harl::complain(std::string level)
{
  int log = _stringToLogLevel(level);

  switch(log)
  {
    case DEBUG:
      std::cout << "[ DEBUG ]" << std::endl;
      _debug();
      std::cout << std::endl;
    case INFO:
      std::cout << "[ INFO ]" << std::endl;
      _info();
      std::cout << std::endl;
    case WARNING:
      std::cout << "[ WARNING ]" << std::endl;
      _warning();
      std::cout << std::endl;
    case ERROR:
      std::cout << "[ ERROR ]" << std::endl;
      _error();
      std::cout << std::endl;
      break;
    default:
      std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
      break;
  }
}

int Harl::_stringToLogLevel(std::string level)
{
  std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
  int level_found = -1;

  for (int i = 0; i < 4; i++)
  {
    if (levels[i] == level)
      level_found = i;
  }
  return (level_found);
}
