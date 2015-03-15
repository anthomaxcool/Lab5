#include "stdafx.h"
#include <algorithm>

using namespace ShapeLibrary;

Polygon::Polygon(IWindowAPI &windowAPI) : ClosedPolyline(windowAPI)
{
	
}
Polygon::~Polygon()
{
	
}
void Polygon::draw()
{
	if (getNumberOfPoints() < 3) throw runtime_error("Doit avoir au moins 3 points");

	this->windowAPI->setDrawingColor(getLineColor());
	for (unsigned int i = 0; i < getNumberOfPoints() - 1; i++)
	{
		this->windowAPI->drawLine(point.at(i), point.at(i + 1));
		if ((i + 1) == (getNumberOfPoints() - 1))
		{
			this->windowAPI->drawLine(point.at(i + 1), point.at((i + 1) - (getNumberOfPoints() - 1)));
		}
	}
}
void Polygon::add(const Point _point)
{

}
bool Polygon::onSegment(const Point &p1, const Point &p2, const Point &pTest)
{
	return (pTest.x <= max(p1.x, p2.x) && pTest.x >= min(p1.x, p2.x) && pTest.y <= max(p1.y, p2.y) && pTest.y >= min(p1.y, p2.y));
}

//Credit : http://flassari.is/2008/11/line-line-intersection-in-cplusplus/
bool Polygon::intersectLineSegment(const Point &p1, const Point &p2, const Point &p3, const Point &p4) 
{
	double x1 = p1.x, x2 = p2.x, x3 = p3.x, x4 = p4.x;
	double y1 = p1.y, y2 = p2.y, y3 = p3.y, y4 = p4.y;

	double d = (x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4);
	// If d is zero, there is no intersection
	if (d == 0) return false;

	// Get the x and y
	double pre = (x1*y2 - y1*x2), post = (x3*y4 - y3*x4);
	double x = (pre * (x3 - x4) - (x1 - x2) * post) / d;
	double y = (pre * (y3 - y4) - (y1 - y2) * post) / d;

	// Check if the x and y coordinates are within both lines
	if (x < min(x1, x2) || x > max(x1, x2) ||
		x < min(x3, x4) || x > max(x3, x4)) return false;
	if (y < min(y1, y2) || y > max(y1, y2) ||
		y < min(y3, y4) || y > max(y3, y4)) return false;

	//
	if ((x == p1.x || x == p2.x || x == p3.x || x == p4.x) && (y == p1.y || y == p2.y || y == p3.y || y == p4.y)) return false;

	return true;
}