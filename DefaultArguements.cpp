#include <iostream>

using namespace std;

//Default arguments are always assigned in the declaration of the function.
void Add(int=0, int=0);
void Add(float);

void main()
{
	Add();
	Add(100.1f);
	Add(5, 2);
}
void Add(float a) { cout << "Sum is 5." << endl; }
void Add(int a, int b) {	cout << "Sum is " << a + b << endl; }