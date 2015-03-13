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
void Rectangle::setHeight(const int _height)
{
	if (_height < 0) throw invalid_argument("Nombre invalide (Négatif)");
	height = _height;
}
void Rectangle::setWidth(const int _width)
{
	if (_width < 0) throw invalid_argument("Nombre invalide (Négatif)");
	width = _width;
}
void Rectangle::draw()
{
	if (point.empty()) throw runtime_error("Aucune position disponible");
	if (getNumberOfPoints() == 1)
	{
		this->windowAPI->setDrawingColor(getLineColor());
		this->windowAPI->drawRectangle(point.at(0), height, width);
		if (getFillColor().getColorAsInt() != Color::INVISIBLE)
		{
			this->windowAPI->fillRectangle(point.at(0), height, width);
		}
	}
}