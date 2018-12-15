#include <iostream>

using namespace std;

class CA {
public:
	void fun1() { cout << "CA fun1 called" << endl; }
};

class CB {
public:
	void fun2() { cout << "CB fun2 called" << endl; }
};

int main()
{
	CA *p1 = new(nothrow) CA;
	p1->fun1();

	CB *q1 = reinterpret_cast<CB*>(p1);
	q1->fun2();
}