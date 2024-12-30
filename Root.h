#pragma once
#include <iostream>

using namespace std;

template<class T>
class Root
{
public:
	virtual T get_root() = 0;
};

