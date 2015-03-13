#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class Rectangle : public Shape
	{
	public:
		Rectangle(IWindowAPI &windowAPI);
		~Rectangle();
	
		void setPosition(const Point point);
		void setHeight(const unsigned int);
		void setWidth(const unsigned int);
	};
}