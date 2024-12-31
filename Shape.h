#pragma once
#include <iostream>

using namespace std;

class Shape
{
public:
	virtual void Show() = 0;
};

class Square : public Shape
{
	int x, y, side;

public:
	Square(int x_P, int y_P, int side_P) :x{ x_P }, y{ y_P }, side{ side_P } {};

	virtual void Show() override final
	{
		cout << "\nКоординаты левого верхнего угла: \n X: " << x << "\nY: " << y << "\nДлина стороны: " << side << "\n\n";
	}
};

class Rectangle : public Shape
{
	int x, y, first_side, second_side;

public:
	Rectangle(int x_P, int y_P, int fside_P, int sside_P) :x{ x_P }, y{ y_P }, first_side{ fside_P }, second_side{ sside_P } {};

	virtual void Show() override final
	{
		cout << "\nКоординаты левого верхнего угла: \n X: " << x << "\nY: " << y << "\nДлина 1 стороны: " << first_side << "\nДлина 2 стороны: " << second_side << "\n\n";
	}
};

class Circle : public Shape
{
	int x, y, radius;

public:
	Circle(int x_P, int y_P, int radius_P) :x{ x_P }, y{ y_P }, radius{ radius_P } {};

	virtual void Show() override final
	{
		cout << "\nКоординаты центра: \n X: " << x << "\nY: " << y << "\nРадиус: " << radius << "\n\n";
	}
};

class Ellipse : public Shape
{
	int x, y, first_side, second_side;

public:
	Ellipse(int x_P, int y_P, int fside_P, int sside_P) :x{ x_P }, y{ y_P }, first_side{ fside_P }, second_side{ sside_P } {};

	virtual void Show() override final
	{
		cout << "\nКоординаты левого верхнего угла описанного прямоугольника: \n X: " << x << "\nY: " << y << "\nДлина 1 стороны описанного прямоугольника: " << first_side << "\nДлина 2 стороны описанного прямоугольника: " << second_side << "\n\n";
	}
};