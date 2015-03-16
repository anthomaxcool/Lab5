#include  "stdafx.h"

using namespace WindowRender;
using namespace ShapeLibrary;

WindowsRender::WindowsRender(IWindowAPI &windowAPI)
{
	this->windowAPI = &windowAPI;
}
WindowsRender::~WindowsRender()
{
	
}
void WindowsRender::attach(Shape & _shape)
{
	shapes.push_back(&_shape);
}
void WindowsRender::render()
{
	windowAPI->clearScreen();

	for (unsigned int i = 0; i < shapes.size(); i++)
	{
		shapes.at(i)->draw();
	}
	windowAPI->displayScreen();
	windowAPI->wait(10000);
	if (windowAPI->hasEvent()) windowAPI->getEvent();
}
void WindowsRender::putOnTop(Shape & p)
{
	for (unsigned int i = 0; i < shapes.size(); i++)
	{
		if (shapes.at(i) == &p)
		{
			shapes.erase(shapes.begin()+i);
			shapes.insert(shapes.end(), &p);
			break;
		}
	}
}