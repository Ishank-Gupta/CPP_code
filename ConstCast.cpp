#include <iostream>

using namespace std;
// An example of Const Cast.
class CA {
private:
	int a, b;
public:
	CA(int x = 0, int y = 0) : a(x), b(y) {}
	void print() const 
	{
		cout << "A = " << a << ", B = " << b << endl;
	}
	void input()
	{
		cout << "Enter the two numbers : ";
		cin >> a >> b;
	}
};

int main()
{
	//Create a const object of CA type in the heap.
	const CA *p = new(nothrow) CA(10, 20);
	//p->input();			// Cannot call a non-const object.
	p->print();
	// REMOVE the constness of an const object with const_cast.
	CA *q = const_cast<CA*>(p);
	q->input();
	delete p;
}