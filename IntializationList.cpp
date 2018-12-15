#include<iostream>

using namespace std;
/*
	- An example constructor initializer/initialization list.
	- Prefer initialization over assignment - It's good practice.

	- Any business attempted during the business-logic phase of a constructor call, is actually an assignment and not true initialization.

	- If we want to achieve true initialization on data members, then such business must be attempted during the PROLOG phase of the constructor WITH THE 
	  HELP of 'constructor initializer/initialization' list.

NOTE: It is a good or an efficient practice to deal with all data members in the initializer list of the constructor, irrespective they are const or 
	  not a const.
*/
class CA {

private:
	int a;
	const int b;

public:
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
	cout << "Enter the number for A : ";
	cin >> this->a;
}

void CA::print()
{
	//cout << __FUNCDNAME__ << endl;
	cout << "A = " << a << "\nB = " << b << endl;
}


int main()
{

	CA obj1, obj2(100), obj3(20, 30);

	obj1.print();	//CA::print(&obj1)
	obj2.print();
	obj3.print();
}