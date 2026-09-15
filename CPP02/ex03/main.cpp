/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 16:25:27 by mmorente          #+#    #+#             */
/*   Updated: 2026/09/14 16:29:20 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

void runTest(std::string const &name, Point const &a, Point const &b,
             Point const &c, Point const &point, bool expected)
{
    bool result = bsp(a, b, c, point);
    std::cout << name << ": "
              << (result ? "True" : "False")
              << " (esperado: " << (expected ? "True" : "False") << ") "
              << ((result == expected) ? "OK" : "FALLO")
              << std::endl;
}

int main(void)
{
 Point a(0.2f, 0);
 Point b(6, 0);
 Point c(3, 6);

  runTest("Punto dentro", a, b, c, Point(3.74f, 2), true);
  runTest("Punto fuera (lejos)",   a, b, c, Point(10.5f, 10), false);
  runTest("Punto fuera (cerca)",   a, b, c, Point(5, 5),   false);
  runTest("Punto = vertice a",     a, b, c, Point(0, 0),   false);
  runTest("Punto sobre arista a-b",a, b, c, Point(3, 0),   false);
  runTest("Punto debajo",          a, b, c, Point(3, -1),  false);

  return (0);
}
