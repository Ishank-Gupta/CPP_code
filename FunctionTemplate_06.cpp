#include <iostream>

using namespace std;

// A generic function supporting two unknown type.
// Modern C++11 Approach, by using type-interface mechanism.
template<typename T1, typename T2> auto Add(T1 a, T2 b) //-> decltype(a+b)
{
	cout << __FUNCDNAME__ << endl;
	//	cout << "Sum is :" << a + b << "\n" << endl;
	return a + b;
}

int main()
{
	float x;
	x = Add(12.34f, 100);	// Explicit cum implicit instantiation /*<float> for T3*/
	cout << "X = " << x << "\n" << endl;
	x = Add(100, 12.34f);  // Explicit cum implicit instantiation /*<float> for T3*/
	cout << "X = " << x << "\n" << endl;
}