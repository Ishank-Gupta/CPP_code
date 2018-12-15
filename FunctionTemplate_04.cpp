#include<iostream>

using namespace std;

// A generic function supporting two unknown type.
template<typename T1, typename T2, typename T3> T3 Add(T1 a, T2 b)
{
	cout << __FUNCDNAME__ << endl;
//	cout << "Sum is :" << a + b << "\n" << endl;
	return a + b;
}

int main()
{
	float x;
	x = Add<float,int,float>(12.34f, 100);	// Explicit instantiation /*<float,int,float>*/
	cout << "X = " << x << "\n" << endl;
	x = Add<int, float, float>(100, 12.34f);  // Explicit instantiation /*<int,float,float>*/
	cout << "X = " << x << "\n" << endl;
}