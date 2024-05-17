/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:38:54 by mzolfagh          #+#    #+#             */
/*   Updated: 2024/05/17 16:03:02 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
private:
	const Fixed	_x;
	const Fixed	_y;
public:
	Point( void );
	Point( const float x, const float y );
	Point( const Point& other );
	Point& operator=( const Point& other);
	
	void	setPoint( const Fixed& x, const Fixed& y);
	~Point();
};

Point::Point( void ) : _x(0), _y(0)
{
}
Point::Point( const float x, const float y ) : _x(x), _y(y)
{
}

Point::Point( const Point& other)
{
}

Point& Point::operator=( const Point& other )
{
	if (this == &other)
		return (*this);
	
}



Point::~Point()
{
}



#endif