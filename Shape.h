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
		cout << "\n���������� ������ �������� ����: \n X: " << x << "\nY: " << y << "\n����� �������: " << side << "\n\n";
	}
};

class Rectangle : public Shape
{
	int x, y, first_side, second_side;

public:
	Rectangle(int x_P, int y_P, int fside_P, int sside_P) :x{ x_P }, y{ y_P }, first_side{ fside_P }, second_side{ sside_P } {};

	virtual void Show() override final
	{
		cout << "\n���������� ������ �������� ����: \n X: " << x << "\nY: " << y << "\n����� 1 �������: " << first_side << "\n����� 2 �������: " << second_side << "\n\n";
	}
};

class Circle : public Shape
{
	int x, y, radius;

public:
	Circle(int x_P, int y_P, int radius_P) :x{ x_P }, y{ y_P }, radius{ radius_P } {};

	virtual void Show() override final
	{
		cout << "\n���������� ������: \n X: " << x << "\nY: " << y << "\n������: " << radius << "\n\n";
	}
};

class Ellipse : public Shape
{
	int x, y, first_side, second_side;

public:
	Ellipse(int x_P, int y_P, int fside_P, int sside_P) :x{ x_P }, y{ y_P }, first_side{ fside_P }, second_side{ sside_P } {};

	virtual void Show() override final
	{
		cout << "\n���������� ������ �������� ���� ���������� ��������������: \n X: " << x << "\nY: " << y << "\n����� 1 ������� ���������� ��������������: " << first_side << "\n����� 2 ������� ���������� ��������������: " << second_side << "\n\n";
	}
};