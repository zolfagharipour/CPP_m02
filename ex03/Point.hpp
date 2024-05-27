/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <mzolfagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:38:54 by mzolfagh          #+#    #+#             */
/*   Updated: 2024/05/19 19:13:04 by mzolfagh         ###   ########.fr       */
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
	Point( const Fixed x, const Fixed y );
	Point( const Point& other );
	Point operator=( const Point& other);
	// Point& operator=( const Point& other ) = delete;
	
	const Fixed&	fixedX( void ) const;
	const Fixed&	fixedY( void ) const;
	float	getX( void ) const;
	float	getY( void ) const;

    Point operator+( const Point& other ) const;
    Point operator-( const Point& other ) const;
    Fixed operator*( const Point& other ) const;
	
	~Point();
};

Point::Point( void ) : _x(0), _y(0)
{
}
Point::Point( const float x, const float y ) : _x(x), _y(y)
{
}
Point::Point( const Fixed x, const Fixed y ) : _x(x), _y(y)
{
}

Point::Point( const Point& other) : _x(other._x), _y(other._y)
{
}

Point Point::operator=( const Point& other)
{
	Point tmp(other.getX(), other.getY());
	
	if (this == &other)
		return (*this);
	return (tmp);

}

const Fixed&	Point::fixedX( void ) const
{
	return (this->_x);
}

const Fixed&	Point::fixedY( void ) const
{
	return (this->_y);
}

float	Point::getX( void ) const
{
	return (this->_x.toFloat());
}

float	Point::getY( void ) const
{
	return (this->_y.toFloat());
}


Point Point::operator+( const Point& other ) const
{
	Point	a(this->fixedX() + other.fixedX(), this->fixedY() + other.fixedY());
	
	return (a);
}

Point Point::operator-( const Point& other ) const
{
	Point	a(this->fixedX() - other.fixedX(), this->fixedY() - other.fixedY());
	
	return (a);
}

Fixed Point::operator*( const Point& other ) const
{
	Fixed	a(this->fixedX() * other.fixedX() + this->fixedY() * other.fixedY());
	
	return (a);
}

Point::~Point()
{
}


#endif