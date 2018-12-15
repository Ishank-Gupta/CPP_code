#include<iostream>

// An example on CONSTRUCTOR/DESTRUCTOR BEHAVIOUR WITH REGARD TO INHERITANCE.
using namespace std;

class CA {

private:
	int a, b;
public:
	CA();
	CA(int x);
	CA(int x, int y);
	CA(const CA &x);
	~CA();
};

class CB : public CA {

private:
	int a, b;
public:
	CB();
	CB(int x);
	CB(int x, int y);
	CB(const CB &x);
	~CB();
};

//Place the definition outside the class body.
CA::CA() :a(0), b(0) { cout << "CA Default Constructor." << endl; }
CA::CA(int x) : a(x), b(x) { cout << "CA single parameter Constructor." << endl; }
CA::CA(int x, int y) : a(x), b(y) { cout << "CA double parameters Constructor." << endl; }
CA::CA(const CA &x) : a(x.a), b(x.b) { cout << "CA copy Constructor." << endl; }
CA::~CA() { cout << "CA Destructor." << endl; }


//Place the definition outside the class body.
CB::CB() : CA(), a(0), b(0) { cout << "CB Default Constructor." << endl; }
CB::CB(int x) : CA(x), a(x), b(x) { cout << "CB single parameter Constructor." << endl; }
CB::CB(int x, int y) : CA(x, y), a(x), b(y) { cout << "CB double parameters Constructor." << endl; }
CB::CB(const CB &x) : CA(x), a(x.a), b(x.b) { cout << "CB copy Constructor." << endl; }
CB::~CB() { cout << "CB Destructor." << endl; }


int main()
{
	CB obj(20, 30);
	//CB obj1(obj);
}