/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/02 14:11:57 by mmorente          #+#    #+#             */
/*   Updated: 2026/09/02 14:15:53 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
  Harl harl = Harl();

  harl.complain("DEBUG");
  harl.complain("INFO");
  harl.complain("WARNING");
  harl.complain("ERROR");

  return (0);
}
