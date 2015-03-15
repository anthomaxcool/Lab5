#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class Polygon : public ClosedPolyline
	{
	public:
		Polygon(IWindowAPI &windowAPI);
		~Polygon();

		bool onSegment(const Point &p1, const Point &p2, const Point &pTest);
		bool intersectLineSegment(const Point &p1, const Point &p2, const Point &p3, const Point &p4);

		void draw();
		void add(const Point _point);
	};
}
