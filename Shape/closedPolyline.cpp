#include "stdafx.h"

using namespace ShapeLibrary;

ClosedPolyline::ClosedPolyline(IWindowAPI &windowAPI) : OpenPolyline(windowAPI)
{

}
ClosedPolyline::~ClosedPolyline()
{

}
void ClosedPolyline::draw()
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