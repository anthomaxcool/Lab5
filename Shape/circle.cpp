#include "stdafx.h"

using namespace ShapeLibrary;

Circle::Circle(IWindowAPI &windowAPI) : Shape(windowAPI)
{

}

Circle::~Circle()
{

}

void Circle::setCenter(Point _point)
{
	point.push_back(_point);
}
void Circle::setRadius(unsigned int _radius)
{
	radius = _radius;
}
void Circle::draw()
{
	if (point.empty()) throw runtime_error("Aucune position disponible");
	if (getNumberOfPoints() == 1)
	{

	}
		this->windowAPI->setDrawingColor(getLineColor());
		this->windowAPI->drawRectangle(point.at(0), height, width);
	
	if (getFillColor().getColorAsInt() != Color::INVISIBLE)
	{
		this->windowAPI->fillRectangle(point.at(0), height, width);
	}
}
