#pragma once
#include "stdafx.h"

namespace ShapeLibrary
{
	class OpenPolyline : public Shape
	{
	public:
		OpenPolyline(IWindowAPI &windowAPI);
		~OpenPolyline();

		void draw();
	};
}
