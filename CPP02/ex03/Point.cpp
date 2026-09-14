/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 14:19:16 by mmorente          #+#    #+#             */
/*   Updated: 2026/09/14 14:35:46 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) {
  std::cout << "Default constructor called" << std::endl;
}

Point::Point(Fixed x, Fixed y) : _x(x), _y(y) {}

Point::Point(const Point &point) : _x(point._x), _y(point._y) {
  std::cout << "Copy constructor called" << std::endl;
}

Point &Point::operator=(const Point &point) {
  std::cout << "Copy assignment constructor called" << std::endl;
  return (*this);
}

Point::~Point(void) { std::cout << "Destructor called" << std::endl; }

Fixed const Point::getX(void) { return (_x); }

Fixed const Point::getY(void) { return (_y); }
