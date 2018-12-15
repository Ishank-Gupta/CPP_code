#include<iostream>

using namespace std;
/*
	SCENARIO 3 - Default constructor synthesis by the compiler, when the programmer does not provide any.
*/
class CA {
public:
	CA() { }
};

class CB : public CA {
public:
	//Derived class CB is not provided with any constructor(s)
	//But the compiler will assume a default.
};

int main()
{
	//CB obj1;
}