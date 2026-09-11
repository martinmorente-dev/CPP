/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 12:23:52 by mmorente          #+#    #+#             */
/*   Updated: 2026/09/11 13:35:19 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>
#include <ostream>

class Fixed {

private:
  int _raw;
  static const int _fractionalBits;

public:
  Fixed(void);
  Fixed(const int intNumber);
  Fixed(const float floatNumber);
  Fixed(const Fixed &fixed);
  Fixed &operator=(const Fixed &fixed);
  bool operator>(const Fixed &num2) const;
  bool operator<(const Fixed &num2) const;
  bool operator>=(const Fixed &num2) const;
  bool operator<=(const Fixed &num2) const;
  bool operator==(const Fixed &num2) const;
  bool operator!=(const Fixed &num2) const;
  Fixed operator+(const Fixed &num2) const;
  Fixed operator-(const Fixed &num2) const;
  Fixed operator*(const Fixed &num2) const;
  Fixed operator/(const Fixed &num2) const;
  Fixed &operator++(void);
  Fixed operator++(int);
  Fixed &operator--(void);
  Fixed operator--(int);
  ~Fixed(void);

  int getRawBits(void) const;
  float toFloat(void) const;
  int toInt(void) const;
  void setRawBits(int const raw);
  static Fixed &min(Fixed &a, Fixed &b);
  static const Fixed &min(const Fixed &a, const Fixed &b);
  static Fixed &max(Fixed &a, Fixed &b);
  static const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
