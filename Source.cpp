#include "Root.h"
#include "Shape.h"
#include <vector>

int main()
{
	setlocale(LC_ALL, "Russian");

	/*Square_root<int> meow(1, 10, -39); 

	cout << meow.get_root().second;*/

	Square obj1{ 1,2,3 };
	Rectangle obj2{ 1,2,3,4 };
	Circle obj3{ 1,2,3 };
	Ellipse obj4{ 1,2,3,4 };

	vector<Shape*> test;

	test.push_back(&obj1);
	test.push_back(&obj2);
	test.push_back(&obj3);
	test.push_back(&obj4);

	for (int i = 0; i < 4; i++)
	{
		test.back()->Show();
		test.pop_back();
	}

	return 0;
}