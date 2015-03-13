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
		Shape(IWindowAPI &windowAPI);
		~Shape();

		virtual void draw() = 0;
		void setLineColor(const Color _lineColor);
		Color getLineColor();
		void setFillColor(const Color _fillColor);
		Color getFillColor();
		Point getPoint(const unsigned int _index);
		unsigned int getNumberOfPoints();
		void add(const Point _point);
	protected:
		IWindowAPI *windowAPI;
		vector<Point> point;
	private:
		Color lineColor;
		Color fillColor;
	};
}
