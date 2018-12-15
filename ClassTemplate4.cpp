#include <iostream>

using namespace std;
// an example on Generic class, supporting a single unknown-data type.
template<typename T = double> class CA		//double is the default type.
{
private:
	T a, b;

public:
	CA(T);
	CA(T, T);
	void sum();
	~CA();
};

//*******Never Facilitate object constructor for Char type.*********//
//Traditional approach (C++ 98/2003 Standard)
template<> class CA<char> {

private:
	CA(char, char);
	~CA();

	/*
private:
	char a, b;
public:
	//All member definitions of specialized classes must be inside the class body.
	CA(char x, char y) :a(x), b(y) { cout << "CA-CHAR, specialized constructor." << endl; }
	~CA() { cout << "CA-CHAR, specialized destructor." << endl; }
	void print() { cout << "The two characters are : " << a << " and " << b << endl; }
	void CA<char>::sum() { cout << "CA-CHAR, specialized sum called, cannot add 2 characters." << endl; }
	*/
};

template<typename T> CA<T>::CA(T x) : a(x), b(x)
{
	cout << "CA<" << typeid(T).name() << "> one arg. constructor." << endl;
}

template<typename T> CA<T>::CA(T x, T y) : a(x), b(y)
{
	cout << "CA<" << typeid(T).name() << "> two arg. constructor." << endl;
}

template<typename T> void CA<T>::sum()
{
	cout << "Sum<" << typeid(T).name() << "> called.\n" << a << " + " << b << " = " << a + b << endl;
}

template<typename T>CA<T>::~CA()
{
	cout << "~CA<" << typeid(T).name() << "> destructor. " << endl;

}

int main()
{
	CA <int> obj1(100, 200);
	obj1.sum();
	CA <float> obj2(45.12f, 78.32f);
	obj2.sum();
	CA<> obj3(87.12, 98.43);
	obj3.sum();

	CA <char> obj4('t', 'r');
	//obj4.sum();
}