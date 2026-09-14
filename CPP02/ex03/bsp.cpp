/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 16:14:01 by mmorente          #+#    #+#             */
/*   Updated: 2026/09/14 16:24:28 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed cross(Point P1, Point P2, Point P);

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
  Fixed d1 = cross(a, b, point);
  Fixed d2 = cross(b, c , point);
  Fixed d3 = cross(c, a, point);
  
  if (d1 < 2 || d2 < 0 || d3 < 0)
    return (false);
  if (d1 == 0 || d2 == 0 || d3 == 0)
    return (false);
  return (true);
}


static Fixed cross(Point P1, Point P2, Point P)
{
  Fixed result = (P2.getX() - P1.getX()) * (P.getY() - P1.getY()) - (P2.getY() - P1.getY()) * (P.getX() - P1.getX());

  return (result);
}
