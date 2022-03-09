#include <iostream>

class Point
{
public:
	int x;
	int y;
	void Print()
	{
		std::cout << "x=" << x;
	}
};

int main()
{
	Point a;

	a.x = 0;
	a.Print();
	return (0);
}
