#include<iostream>

using namespace std;

class CA {

private:
	int a, b;
public:
	/*
		Any member function that does a WRITE operation on an object, is also called as - MUTATOR method, SET method or SETTER.
		Any member function that does a READ operation on an object, is also called as -  GET method or GETTER.
	*/
	CA();
	CA(int x);
	CA(int x, int y);
	~CA();
	void input();	// void input(CA* const this)
	void print();	// void print(CA* const this)
};
CA::CA() :a(0), b(0) { cout << "CA Default Constructor." << endl; }
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

//CA obj1;	// Global object - resides on DATA-SEGMENT.

int main()
{
	//cout << "Size of the object : " << sizeof(CA) << endl;

	CA obj1, obj2(100), obj3(20, 30);	// resides on stack
	//obj1.input();	//CA::input(&obj1)
	obj1.print();	//CA::print(&obj1)
	obj2.print();
	obj3.print();
}