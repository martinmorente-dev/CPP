/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 14:11:57 by mmorente          #+#    #+#             */
/*   Updated: 2026/09/03 11:28:18 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char *argv[])
{
  if (argc != 2)
    return (1);

  Harl harl = Harl();
  harl.complain(argv[1]);
  return (0);
}
