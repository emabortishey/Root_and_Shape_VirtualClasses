#pragma once
#include <iostream>

using namespace std;

template<class T>
class Root
{
public:
	virtual pair<T, T> get_root() = 0;
};

template<class T>
class Line_root : public Root<T>
{
	T x;
	T value;

public:
	Line_root(T x_P, T val_P) : x{ x_P }, value{ val_P } { };

	virtual pair<T, T> get_root() override final
	{
		return (x && value) ? pair<T, int>( - value / x, 0) : pair<int,int>(0, 0); 
	}
};

template<class T>
class Square_root : public Root<T>
{
	T a;
	T b;
	T c;

public:
	Square_root(T a_P, T b_P, T c_P) : a{ a_P }, b{ b_P }, c{ c_P } { };

	virtual pair<T, T> get_root() override final
	{
		return pair<T, T>(( - b + sqrt(b * b - 4 * a * c)) / (2 * a), ( - b - sqrt(b * b - 4 * a * c)) / (2 * a));
	}
};