#include<iostream>

using namespace std;
//SCENARIO 2 - Default constructor synthesis by the compiler, when the class programmer does not provide any constructor(s).
/*
	- A constructor class which is not provided with any container class has a data member which is an object of the class with constructor(s), 
	  then the compiler will assume one for the container class.
*/
class CA {
public:
	CA() { }
};

class CB {		//CB contains CA [HAS-A relationship]
private:
	CA obj;
public:
	// No constructor is provided to CB by the programmer, yet compile will assume a default constructor.

};

int main()
{
	CB object;
}