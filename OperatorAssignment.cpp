#include <iostream>

using namespace std;

class CA {

private:
	int a, b;
public:
	CA(int = 0, int = 0);
	void print() const;
	CA& operator =(const CA &x);
};

CA::CA(int x, int y) : a(x), b(y) {}
void CA::print() const { cout << "A = " << a << "\nB = " << b << endl; }
CA& CA::operator =(const CA &x)
{
	cout << "operator = called" << endl;
	this->a = x.a;
	this->b = x.b;
	return *this;
}

int main()
{
	CA obj1(10, 20), obj2;
/*
	obj1.print();
	obj2.print();
	cout << "After Assignment" << endl;
	obj2 = obj1;			// obj2.operator =(obj1);
	obj1.print();
	obj2.print();
*/
	CA obj3;
	obj3 = obj2 = obj1;		// obj3.operator =(obj2.operator =(obj1));
}