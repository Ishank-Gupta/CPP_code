#include<iostream>

using namespace std;

int main()
{
	int a = 10, b = 20;

	auto lm = [](int &x, int &y)  -> void
	{
		cout << "Lambda lm is called. Received input : " << x << ", " << y << ".\n";
	};
	lm(a, b);
	cout << "----------------------------------------\n";
	auto lmb = [&](int x, int y) -> void
	{
		x = x + a;
		y = y + b;
		cout << "X = " << x << ", Y = " << y << endl;
	};
	lmb(100, 200);
	lmb(500, 600);
}