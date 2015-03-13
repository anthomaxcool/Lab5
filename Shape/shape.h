#pragma once
#include "stdafx.h"
#include "IWindowAPI.h"

#include <vector>

using namespace std;

namespace ShapeLibrary
{

	class Shape
	{
	public:
		Shape();
		~Shape();

		void draw();
		void setLineColor(const Color _lineColor);
		Color getLineColor();
		void setFillColor(const Color _fillColor);
		Color getFillColor();
		Point getPoint(const unsigned int _index);
		unsigned int getNumberOfPoints();
		void add(const Point _point);
	private:
		Color lineColor;
		Color fillColor;
		vector<Point> point;
		IWindowAPI *windowAPI;
	};
}
