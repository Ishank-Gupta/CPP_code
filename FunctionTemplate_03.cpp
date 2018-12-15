#include<iostream>

using namespace std;

// A generic function supporting two unknown type.
template<typename T1, typename T2> void Add(T1 a, T2 b)
{
	cout << __FUNCDNAME__ << endl;
	cout << "Sum is :" << a + b <<"\n"<< endl;
}

void main()
{
	Add(45.12f, 600);
	Add(56.12, 29.89f);
	// The above generic function is also a candidate for homogeneous input(s).
	Add(100, 100);
}