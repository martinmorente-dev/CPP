/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmorente <mmorente@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 13:26:37 by mmorente          #+#    #+#             */
/*   Updated: 2026/09/14 13:32:40 by mmorente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {

  private:
    Fixed const x;
    Fixed const y;

  public:
    Point(void);
    Point(Fixed x, Fixed y);
    Point(const Point& point);
    Point &operator=(const Point *point);
    ~Point(void);
  };

#endif
