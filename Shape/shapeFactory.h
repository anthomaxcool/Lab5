#pragma once
#include "stdafx.h"
#include "IWindowAPI.h"

namespace ShapeLibrary
{
	class ShapeFactory
	{
	public:
		ShapeFactory(IWindowAPI &windowAPI);
		~ShapeFactory();
		
		OpenPolyline &createOpenPolyLine();
		Circle &createCircle(const Point &_point, const int &_radius);
		Rectangle &createRectangle(const Point &_point, const int &_height, const int &_width);
		ClosedPolyline &createClosedPolyLine();
		Polygon &createPolygone();
	private:
		IWindowAPI *windowAPI;
	};
}