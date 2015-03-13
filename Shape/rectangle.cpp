#include "stdafx.h"

using namespace ShapeLibrary;

Rectangle::Rectangle(IWindowAPI &windowAPI) : Shape(windowAPI)
{
	
}
Rectangle::~Rectangle()
{

}
void Rectangle::setPosition(const Point _point)
{
	point.push_back(_point);
}
void Rectangle::setHeight(const unsigned int _height)
{
	height = _height;
}
void Rectangle::setWidth(const unsigned int _width)
{
	width = _width;
}
void Rectangle::draw()
{
	for (unsigned int i = 0; i < getNumberOfPoints(); i++)
	{
		this->windowAPI->setDrawingColor(getLineColor());
		this->windowAPI->drawRectangle(point.at(0), height, width);
	}
}