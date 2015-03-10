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
	private:
		Color color;
		Point point;
		ShapeFactory *shapeFactory = new ShapeFactory();
		IWindowAPI *windowAPI;
	};
}
