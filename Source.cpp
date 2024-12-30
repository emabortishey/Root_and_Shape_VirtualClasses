#include "Root.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	Square_root<int> meow(1, 10, -39); 

	cout << meow.get_root().second;

	return 0;
}