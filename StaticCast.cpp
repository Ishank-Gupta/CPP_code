#include <iostream>

using namespace std;
// An example of static cast.
class CA {
public:
	void fun1() { cout << "CA fun1 called." << endl; }
};
;
class CB : public CA {
public:
	void fun2() { cout << "CB fun2 called." << endl; }
};

int main()
{
	CA *p1 = new(nothrow) CA;
	p1->fun1();

	CB *q1 = static_cast<CB*>(p1);		// Down casting
	q1->fun2();

	p1 = static_cast<CA*>(q1);			// Up casting
	q1->fun1();
}