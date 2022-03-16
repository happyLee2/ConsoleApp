#include "Rectangle.h"

Rectangle::Rectangle()
{
	length = 0;
	width = 0;
}

Rectangle::Rectangle(int a, int b)
{
	length = a;
	width = b;
	
}

void Rectangle::SetLength(int l)
{
	length = l;
}

void Rectangle::SetWidth(int w)
{
	width = w;
}

int Rectangle::GetPerimeter()
{
	
	return (length + width) * 2;

}

int Rectangle::GetArea()
{
	return (length * width);
}