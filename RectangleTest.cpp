#include "Rectangle.h"

int main()
{
	Rectangle rect1;
	Rectangle rect2(10, 25);

	rect1.SetLength(5);
	rect1.SetWidth(10);

	cout << rect1.GetPerimeter() << "\n";
	cout << rect1.GetArea() << "\n";

	cout << rect2.GetPerimeter() << "\n";
	cout << rect2.GetArea() << "\n";




	return 0;
}