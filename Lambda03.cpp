#include<iostream>

using namespace std;

int main()
{
	int a = 10, b = 20;

	auto lmb = [=]() mutable -> void
	{
		cout << __FUNCDNAME__ << endl;
		a = a + 20;
		b = b + 20;
		cout << "Inside Lambda, A = " << a << ", B = " << b << endl;
	};

	lmb();
	cout << "Outside Lambda, A = " << a << ", B = " << b << endl;
	lmb();
}