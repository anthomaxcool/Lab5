#include "stdafx.h"

using namespace ShapeLibrary;

Shape::Shape(IWindowAPI &windowAPI)
{
	this->windowAPI = &windowAPI;
	point.clear();
	setLineColor(Color::BLUE);
	setFillColor(Color::INVISIBLE);
}
Shape::~Shape()
{
	
}
void Shape::draw()
{
	
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