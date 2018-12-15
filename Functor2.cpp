#include<iostream>

using namespace std;
// An example on function pointer as a class data member and functors.

using FP = void(*)(int, int);

class CA {
private:
	FP fp;
public:
	CA(FP ff) : fp(ff) { }
	void operator() (int x, int y)		// Function operator (FUNCTOR)
	{
		(*fp)(x, y);
	}
};

void fun1(int x, int y) { cout << "Fun1 called, x = " << x << ", y = " << y << endl; }
void fun2(int x, int y) { cout << "Fun2 called, x = " << x << ", y = " << y << endl; }

int main()
{
	CA obj1(&fun1);
	obj1(10, 20);				//obj1.operator()();

	CA obj2(&fun2);
	obj2(300, 400);
}