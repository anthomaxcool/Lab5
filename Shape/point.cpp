#include "stdafx.h"

#include <stdexcept>

using namespace ShapeLibrary;


Point::Point( double _x, double _y ) :
	x(_x), 
	y(_y)
{	
	if (_x < 0 || _y < 0)
	{
		throw invalid_argument("Il ne peut pas y avoir de négatif!");
	}
}

bool Point::operator == (const Point & point) const
{
	if (x != point.x) return false;
	if (y != point.y) return false;
	return true;
}

bool Point::operator != (const Point & point) const
{
	if (x == point.x && y == point.y) return false;
	return true; 
}
