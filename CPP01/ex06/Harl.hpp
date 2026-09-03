/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 12:15:15 by mmorente          #+#    #+#             */
/*   Updated: 2026/09/03 11:15:05 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>


class Harl
{
  private:
    void _debug(void);
    void _info(void);
    void _warning(void);
    void _error(void);

    int _stringToLogLevel(std::string level);
  
  public:
    void complain(std::string level);
};

enum LogLevel {
  DEBUG,
  INFO,
  WARNING,
  ERROR
};

#endif
