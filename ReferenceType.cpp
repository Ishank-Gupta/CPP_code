#include<iostream>

using namespace std;


void swap1(int*, int*);
void swap2(int&, int&);
void swap3(int, int);

void main()
{
	int a = 10, b = 20;
	swap1(&a, &b);
	cout << "\nAfter swap, a = " << a << ", b = " << b << "." << endl;

	swap2(a, b);
	cout << "\nAfter swap, a = " << a << ", b = " << b << "." << endl;

	swap3(a, b);
	cout << "\nAfter swap, a = " << a << ", b = " << b << "." << endl;	// No change
}

void swap1(int *p, int *q)	// int *p = &a; *q = &b; CALL BY ADDRESS
{
	int temp = *p;
	*p = *q;
	*q = temp;
}

void swap2(int &p, int &q)	// int &p = a; &q = b; CALL BY REFERENCE
{
	int temp = p;
	p = q;
	q = temp;
}

void swap3(int p, int q)	// int &p = a; &q = b; CALL BY VALUE
{
	// It wont effect the variable passed.
	int temp = p;
	p = q;
	q = temp;
	cout << "\nAfter swap3, p = " << p << ", q = " << q << "." << endl;	// No change
}