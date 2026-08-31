/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 10:41:19 by mmorente          #+#    #+#             */
/*   Updated: 2026/08/31 12:01:33 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main (int argc, char *argv[])
{
  std::string file_data;

  if (!validations(argv, argc))
    return (1);
  return (0);
}
