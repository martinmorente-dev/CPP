/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/31 10:41:19 by mmorente          #+#    #+#             */
/*   Updated: 2026/09/01 11:50:16 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

int main (int argc, char *argv[])
{
  if (!validations(argv, argc))
    return (1);
  File(argv[1], argv[2], argv[3]).newSed();
  return (0);
}
