#include<iostream>

using namespace std;

class CA {

private:
	int a, b;
public:
	CA();
	explicit CA(int x);
	CA(int x, int y);
	explicit CA(CA &x);
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
	CA obj1(100);
	CA obj2(obj1);
	//obj1 = 100;		// Won't work if the parametrized constructor is explicit.
	//CA obj2 = obj1;   // Won't work if the copy constructor is explicit.
	obj1.print();
	obj2.print();
}