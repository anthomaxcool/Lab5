#pragma once
#include "stdafx.h"

using namespace std;
using namespace ShapeLibrary;

namespace WindowRender
{
	class WindowsRender
	{
	public:
		WindowsRender();
		~WindowsRender();

		void attach(Shape & _shape);
		void render();
		void putOnTop(Shape & p);

	private:

		IWindowAPI * windowAPI;
		vector <Shape*> shapes;

	};
}