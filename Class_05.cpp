#include<iostream>

using namespace std;
/*
	- For any given class compiler will not blindly assume a default constructor if in case we do not provide one.
	- A default constructor assumption by the compiler would happen only in certain contexts.
*/
class CA {

private:
	int a, b;

public:
	//CA();
	void input();	// void input(CA* const this)
	void print();	// void print(CA* const this)
};
//CA::CA() :a(0), b(0) { cout << "CA Default Constructor.  " << __FUNCDNAME__<<endl; }

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

	CA obj1;	// resides on stack
    //obj1.input();	//CA::input(&obj1)
	//obj1.print();	//CA::print(&obj1)
}