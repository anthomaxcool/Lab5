#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class Rectangle : public Shape
	{
	public:
		Rectangle(IWindowAPI &windowAPI);
		~Rectangle();
	
		void setPosition(const Point _point);
		void setHeight(const int _height);
		void setWidth(const int _width);
		void draw();
	private:
		unsigned int height;
		unsigned int width;
	};
}