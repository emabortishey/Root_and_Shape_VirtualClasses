#pragma once
#include <iostream>

using namespace std;

template<class T>
class Root
{
public:
	virtual T get_root() = 0;
};

template<class T>
class Line_root : public Root<T>
{
	T x;
	T value;

public:
	Line_root(T x_P, T val_P) : x{ x_P }, value{ val_P } { };

	virtual T get_root() override final
	{
		T result; 
		return (x && value) ? -value / x : 0;
	}
};