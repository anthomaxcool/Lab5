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
		void setLineColor();
		Color getLineColor();
		void setFillColor();
		Color getFillColor();
		Point getPoint(unsigned int _index);
		unsigned int getNumberOfPoints();
		void add();
	private:
		Color lineColor;
		Color fillColor;
		vector<Point> point;
		IWindowAPI *windowAPI;
	};
}
