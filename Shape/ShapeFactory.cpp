#include "stdafx.h"

using namespace ShapeLibrary;

ShapeFactory::ShapeFactory(IWindowAPI &windowAPI)
{
	this->windowAPI = &windowAPI;
}
ShapeFactory::~ShapeFactory()
{
	
}
OpenPolyline &ShapeFactory::createOpenPolyLine()
{
	OpenPolyline *openPolyLine = new OpenPolyline(*windowAPI);
	return *openPolyLine;
}
Circle &ShapeFactory::createCircle(const Point &_point, const int &_radius)
{
	Circle *circle = new Circle(*windowAPI);
	circle->setCenter(_point);
	circle->setRadius(_radius);
	return *circle;
}
Rectangle &ShapeFactory::createRectangle(const Point &_point, const int &_height, const int &_width)
{
	Rectangle *rectangle = new Rectangle(*windowAPI);
	rectangle->setPosition(_point);
	rectangle->setHeight(_height);
	rectangle->setWidth(_width);
	return *rectangle;
}
ClosedPolyline &ShapeFactory::createClosedPolyLine()
{
	ClosedPolyline *closePolyLine = new ClosedPolyline(*windowAPI);
	return *closePolyLine;
}
Polygon &ShapeFactory::createPolygone()
{
	Polygon *polygon = new Polygon(*windowAPI);
	return *polygon;
}