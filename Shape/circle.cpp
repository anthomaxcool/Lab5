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
void Circle::setRadius(int _radius)
{
	if (_radius < 0) throw invalid_argument("Nombre invalide (Négatif)");
	radius = _radius;
}
void Circle::draw()
{
	if (point.empty()) throw runtime_error("Aucune position disponible");
	if (getNumberOfPoints() == 1)
	{
		this->windowAPI->setDrawingColor(getLineColor());
		this->windowAPI->drawCircle(point.at(0), radius);
		if (getFillColor().getColorAsInt() != Color::INVISIBLE)
		{
			this->windowAPI->fillCircle(point.at(0), radius);
		}
	}
}
