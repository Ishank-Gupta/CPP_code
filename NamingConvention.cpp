#include<iostream>

using namespace std;

// An example on naming convention.
extern "C" void _cdecl fun(double d)
{
	cout<< __FUNCDNAME__<<endl;
	cout<<"fun() called\n"<<endl;
}

extern "C++" void main()
{
	cout << __FUNCDNAME__ << endl;
	cout << "Main Function called\n" << endl;
	fun(23.4);
}