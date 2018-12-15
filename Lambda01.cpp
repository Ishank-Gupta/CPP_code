#include<iostream>

using namespace std;

void main()
{
	// auto lm == function<void(void)> lm;
	auto lm = []()  ->void
	{   cout << __FUNCDNAME__ << endl;
	cout << "Lambda called." << endl;
	};

	//.... implement of lambda.
	lm();
}