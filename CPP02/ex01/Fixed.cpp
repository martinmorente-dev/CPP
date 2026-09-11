/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 12:41:04 by mmorente          #+#    #+#             */
/*   Updated: 2026/09/11 11:23:53 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

Fixed::Fixed(void) {
  std::cout << "Default constructor called" << std::endl;
  _raw = 0;
}

Fixed::Fixed(const Fixed &fixed) {
  std::cout << "Copy constructor called" << std::endl;
  _raw = fixed._raw;
}

Fixed::Fixed(const int intNumber) { 
  std::cout << "Int constructor called" << std::endl;
  _raw = intNumber * (1 << _fractionalBits);
}

Fixed::Fixed(const float floatNumber) {
  std::cout << "Float constructor called" << std::endl;
  _raw = roundf(floatNumber * (1 << _fractionalBits));
}

Fixed &Fixed::operator=(const Fixed &fixed) {
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &fixed)
    _raw = fixed._raw;
  return (*this);
}

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

int Fixed::getRawBits(void) const {
  std::cout << "getRawBits member function called" << std::endl;
  return (_raw);
}

void Fixed::setRawBits(int const raw) {
  std::cout << "setRawBits member funcion called" << std::endl;
  _raw = raw;
}

float Fixed::toFloat(void) const {
  float result = (float)_raw / (1 << _fractionalBits);
  return (result);
}

int Fixed::toInt(void) const {
  int result = _raw / (1 << _fractionalBits);
  return (result);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed) {
  os << fixed.toFloat();
  return (os);
}
