#include <iostream>

using namespace std;

class CA {
public:
	void fun() { cout << "CA-fun() called." << endl; }
	void fun(int x) { cout << "CA-fun(int x) called." << endl; }
};

class CB : public CA {
public:
	using CA::fun;	// (OR) CA::fun;
	void fun(double x) { cout << "CB-fun(double x) called." << endl; }
};

int main()
{
	CB obj;
	obj.fun();
	obj.fun(100);
	obj.fun(34.23);
}