#include "stdafx.h"

using namespace ShapeLibrary;

Shape::Shape()
{
	point.clear();
}
Shape::~Shape()
{
	
}
void Shape::draw()
{
	//Draw v.2



	//Draw v.1
	if (getNumberOfPoints() >= 2)
	{
		for (unsigned int i = 0; i < getNumberOfPoints() - 1; i++)
		{
			windowAPI->setDrawingColor(lineColor);
			windowAPI->drawLine(point.at(i), point.at(i + 1));
		}
	}
}
void Shape::setLineColor(const Color _lineColor)
{
	lineColor = _lineColor;
}
Color Shape::getLineColor()
{
	return lineColor;
}
void Shape::setFillColor(const Color _fillColor)
{
	fillColor = _fillColor;
}
Color Shape::getFillColor()
{
	return fillColor;
}
Point Shape::getPoint(const unsigned int _index)
{
	return point.at(_index);
}
unsigned int Shape::getNumberOfPoints()
{
	return point.size();
}
void Shape::add(const Point _point)
{
	point.push_back(_point);
}