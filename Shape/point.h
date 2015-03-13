#pragma once

namespace ShapeLibrary
{
	class Point
	{
	public:
		Point();
		Point(const double _x, const double _y);

		double x;
		double y;

		bool Point::operator == (const Point & point) const;
		bool Point::operator != (const Point & point) const;
	};

}



