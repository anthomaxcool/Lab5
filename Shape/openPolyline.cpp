#include "stdafx.h"

using namespace ShapeLibrary;

OpenPolyline::OpenPolyline(IWindowAPI &windowAPI) : Shape(windowAPI)
{

}
OpenPolyline::~OpenPolyline()
{

}
void OpenPolyline::draw()
{
	if (getNumberOfPoints() < 2) throw runtime_error("Doit avoir au moins 2 points");
	this->windowAPI->setDrawingColor(getLineColor());
	for (unsigned int i = 0; i < getNumberOfPoints() - 1; i++)
	{
		this->windowAPI->drawLine(point.at(i), point.at(i + 1));
	}
}