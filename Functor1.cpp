#include<iostream>

using namespace std;
// An example on function pointer as a class data member and functors.

using FP = void(*)();
class CA {
private:
	FP fp;
public:
	CA(FP ff) : fp(ff) { }
	void operator() ()		// Function operator (FUNCTOR)
	{
		(*fp)();
	}
};

void fun1() { cout << "Fun1 called." << endl; }
void fun2() { cout << "Fun2 called." << endl; }

int main()
{
	CA obj1(&fun1);
	obj1();				//obj1.operator()();

	CA obj2(&fun2);
	obj2();
}