#include<iostream>

using namespace std;
template<typename T> class MyFunction
{
private:
	T fp;
public:
	MyFunction(T x) :fp(x) {}
	void operator ()()
	{
		(*fp)();
	}
	void operator =(T x)
	{
		fp = x;
	}
};

void fun1() { cout << "Global fun1() called" << endl; }
void fun2() { cout << "Global fun2() called" << endl; }

int main()
{
	MyFunction<void(*)()> f_obj1(fun1);
	f_obj1();
}