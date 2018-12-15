#include<iostream>

/*
	-An example on function overloading. Where one and more functions take the same name, subject to the formal parameter's
     are unique.
    -Overloading is not allowed based on return-type of the function.
*/
using namespace std;

void fun()
{
	cout<< __FUNCDNAME__<<endl;
	cout<<"fun() called\n"<<endl;
}
void fun(bool x)
{
	cout<< __FUNCDNAME__<<endl;
	cout<<"fun(bool x) called\n"<<endl;
}
void fun(int x)
{
	cout<< __FUNCDNAME__<<endl;
	cout<<"fun(int x) called\n"<<endl;
}
void fun(float f, double y)
{
	cout<< __FUNCDNAME__<<endl;
	cout<<"fun(float f, double y) called\n"<<endl;
}

void main()
{
	fun();
	fun(true);
	fun(100);
	fun(23.3f,34.4);
}