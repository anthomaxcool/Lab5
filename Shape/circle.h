#pragma once
#include "stdafx.h"
#include "IWindowAPI.h"

namespace ShapeLibrary
{
	class Circle : public Shape
	{
	public:
		Circle(IWindowAPI &windowAPI);
		~Circle();
		
		void setCenter(Point _point);
		void setRadius(unsigned int _radius);
		void draw();
	private:
		unsigned int radius;
	};
}
