#include<iostream>

using namespace std;

// A generic function supporting two unknown type.
template<typename T1, typename T2, typename T3> T1 Add(T2 a, T3 b)
{
	cout << __FUNCDNAME__ << endl;
	//	cout << "Sum is :" << a + b << "\n" << endl;
	return a + b;
}

int main()
{
	float x;
	x = Add<float>(12.34f, 100);	// Explicit cum implicit instantiation /*<float> for T3*/
	cout << "X = " << x << "\n" << endl;
	x = Add<float>(100, 12.34f);  // Explicit cum implicit instantiation /*<float> for T3*/
	cout << "X = " << x << "\n" << endl;
}