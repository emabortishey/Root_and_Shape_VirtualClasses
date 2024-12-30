#include "Root.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	Line_root<int> meow(6, 36);

	cout << meow.get_root();

	return 0;
}