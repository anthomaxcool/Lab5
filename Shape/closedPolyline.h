#pragma once
#include "stdafx.h"
#include "IWindowAPI.h"

namespace ShapeLibrary
{
	class ClosedPolyline : public OpenPolyline
	{
	public:
		ClosedPolyline(IWindowAPI &windowAPI);
		~ClosedPolyline();
		
		void draw();
	};
}