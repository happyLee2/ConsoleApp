#pragma once

#include <iostream>

using namespace std;

class Rectangle
{
private:
	int length;
	int width;


public:

	Rectangle();
	Rectangle(int a, int b);


	void SetLength(int);
	void SetWidth(int);

	int GetPerimeter();
	int GetArea();


};