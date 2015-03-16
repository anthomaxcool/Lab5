#include  "stdafx.h"

using namespace WindowRender;
using namespace ShapeLibrary;

WindowsRender::WindowsRender(IWindowAPI &windowAPI)
{

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
	for (unsigned int i = 0; i < shapes.size(); i++)
	{
		shapes.at(i)->draw();
	}
}
void WindowsRender::putOnTop(Shape & p)
{
	p.draw();
}