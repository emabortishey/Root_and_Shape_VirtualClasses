#pragma once
#include <iostream>

using namespace std;

// на всякий случай сделала его шаблонным
// чтобы пользователь мог работать и с int и с 
// double типами без утечки данных
template<class T>
class Root
{
public:
	// возвращается пара т.к. корня может быть два как в случае с кв. уравнениями
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
		// с помощью тернарного оператора возвращается либо корень и 0
		// либо, если какое-то из значений равно нулю, то два нуля
		return (x && value) ? pair<T, int>( - value / x, 0) : pair<int,int>(0, 0); 
	}
};

template<class T>
class Square_root : public Root<T>
{
	// три значения по формуле
	T a;
	T b;
	T c;

public:
	Square_root(T a_P, T b_P, T c_P) : a{ a_P }, b{ b_P }, c{ c_P } { };

	virtual pair<T, T> get_root() override final
	{
		// с помощью тернарного оператора сразу вычисляются 
		// корни с помощью формулы и функции вычисления квадратного
		// корня для дискриминанта
		return pair<T, T>(( - b + sqrt(b * b - 4 * a * c)) / (2 * a), ( - b - sqrt(b * b - 4 * a * c)) / (2 * a));
	}
};