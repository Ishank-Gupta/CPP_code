#include <iostream>

using namespace std;

// An example of Function template or generic function, supporting a single
// unknown type.
template<typename T> void Add(T a, T b)
{
	T c = a + b;
	cout << __FUNCDNAME__ << endl;
	cout << "Sum is : " << c << "\n" << endl;
}

void main()
{
	Add(10, 20);
	Add(12.34f, 56.78f);
	Add(87.32, 98.58);
}