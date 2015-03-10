#pragma once
#include "stdafx.h"
#include "IWindowAPI.h"

namespace ShapeLibrary
{
	class ClosedPolyline : public OpenPolyline
	{
		ClosedPolyline(IWindowAPI &windowAPI);
		~ClosedPolyline();


	};
}