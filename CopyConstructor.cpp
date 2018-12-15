#include<iostream>

using namespace std;

class CA {

private:
	int a, b;
public:
	CA();
	CA(int x);
	CA(int x, int y);
	CA(CA &x);
	~CA();

	void input();	// void input(CA* const this)
	void print();	// void print(CA* const this)
};
CA::CA() :a(0), b(0) { cout << "CA Default Constructor." << endl; }
CA::CA(int x) : a(x), b(x) { cout << "CA  single parameter Constructor." << endl; }
CA::CA(int x, int y) : a(x), b(y) { cout << "CA double parameters Constructor." << endl; }
CA::CA(CA &x) : a(x.a), b(x.b) { cout << "CA copy Constructor." << endl; }
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

	CA obj1(20, 30);
	obj1.print();

	//CA obj2(obj1);
	//obj2.print();

	/*
	Prefer the above copy constructor implementation as it is more efficient
	when compared to the following approach.
	*/
	CA obj2;		// 1. Call default constructor
	obj2 = obj1;	// 2. Calls compiler-generated assignment function.
	obj2.print();
}