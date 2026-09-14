/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 12:41:04 by mmorente          #+#    #+#             */
/*   Updated: 2026/09/14 16:33:43 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::_fractionalBits = 8;

Fixed::Fixed(void) {
  _raw = 0;
}

Fixed::Fixed(const Fixed &fixed) {
  _raw = fixed._raw;
}

Fixed::Fixed(const int intNumber) {
  _raw = intNumber * (1 << _fractionalBits);
}

Fixed::Fixed(const float floatNumber) {
  _raw = roundf(floatNumber * (1 << _fractionalBits));
}

Fixed &Fixed::operator=(const Fixed &fixed) {
  if (this != &fixed)
    _raw = fixed._raw;
  return (*this);
}

Fixed::~Fixed() {}

int Fixed::getRawBits(void) const {
  return (_raw);
}

void Fixed::setRawBits(int const raw) {
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

bool Fixed::operator<(const Fixed &num2) const {
  return (this->_raw < num2._raw);
}

bool Fixed::operator>(const Fixed &num2) const {
  return (this->_raw > num2._raw);
}

bool Fixed::operator>=(const Fixed &num2) const {
  return (this->_raw >= num2._raw);
}

bool Fixed::operator<=(const Fixed &num2) const {
  return (this->_raw <= num2._raw);
}

bool Fixed::operator!=(const Fixed &num2) const {
  return (this->_raw != num2._raw);
}

bool Fixed::operator==(const Fixed &num2) const {
  return (this->_raw == num2._raw);
}

Fixed Fixed::operator+(const Fixed &num2) const {
  float result = this->toFloat() + num2.toFloat();
  return (Fixed(result));
}

Fixed Fixed::operator-(const Fixed &num2) const {
  float result = this->toFloat() - num2.toFloat();
  return (Fixed(result));
}

Fixed Fixed::operator*(const Fixed &num2) const {
  float result = this->toFloat() * num2.toFloat();
  return (Fixed(result));
}

Fixed Fixed::operator/(const Fixed &num2) const {
  if (num2.toFloat() == 0)
    return (Fixed(0));

  float result = this->toFloat() / num2.toFloat();
  return (Fixed(result));
}

Fixed &Fixed::operator++(void) {
  this->_raw = this->_raw + 1;
  return (*this);
}

Fixed Fixed::operator++(int) {
  Fixed cpy(*this);

  this->_raw = this->_raw + 1;
  return (cpy);
}

Fixed &Fixed::operator--(void) {
  this->_raw = this->_raw - 1;
  return (*this);
}

Fixed Fixed::operator--(int) {
  Fixed cpy(*this);

  this->_raw = this->_raw - 1;
  return (cpy);
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
  if (a < b)
    return (a);
  return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
  if (a < b)
    return (a);
  return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
  if (a > b)
    return (a);
  return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
  if (a > b)
    return (a);
  return (b);
}
