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

template<typename T1> void operator()(T1 x)
{
	(*fp)(x, y);
}

void fun1() { cout << "Global fun1() called" << endl; }
void fun2(int x,int y) { cout << "Global fun2(int, int) called" << endl; }
void fun3(float x) { cout << "Global fun3(float) called" << endl; }

int main()
{
	MyFunction<void(*)()> f_obj1(fun1);
	f_obj1();
	cout << "---------------------" << endl;
	MyFunction<void(*)(int, int)> f_obj2(fun2);
	f_obj2(300,400);
	cout << "---------------------" << endl;
	MyFunction<void(*)(float)> f_obj3(fun3);
	f_obj3(34.12f);

}