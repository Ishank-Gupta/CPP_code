#include<iostream>

using namespace std;
/*
	- If a class comprises of only parametrized constructor(s) and no default constructor, then it is an indication to the consumer,
	  that they cannot create instance without the parameters.
*/
class CA {

private:
	int a, b;

public:
	//CA();
	CA(int x);
	CA(int x, int y);
	~CA();
	void input();	// void input(CA* const this)
	void print();	// void print(CA* const this)
};
//CA::CA() :a(0), b(0) { cout << "CA Default Constructor." << endl; }
CA::CA(int x) : a(x), b(x) { cout << "CA  single parameter Constructor." << endl; }
CA::CA(int x, int y) : a(x), b(y) { cout << "CA double parameters Constructor." << endl; }
CA::~CA() { cout << "CA Destructor." << endl; }

void CA::input()
{
	//cout << __FUNCDNAME__ << endl;
	cout << "Enter the two number : ";
	cin >> this->a >> this->b;
}

void CA::print()
{
	//cout << __FUNCDNAME__ << endl;
	cout << "A = " << a << "\nB = " << b << endl;
}


int main()
{

	CA obj1(2), obj2(100), obj3(20, 30);	// resides on stack
										
	obj1.print();	//CA::print(&obj1)
	obj2.print();
	obj3.print();
}