#include<iostream>

using namespace std;
// An example on simple smart pointer class
class CB //assumed to be memory expensive class
{
private:
	int a, b;
public:
	CB(int = 0, int = 0);
	void print();
	~CB();
};
//----------------------------
CB::CB(int x, int y) :a(x), b(y) { cout << "CB constructor" << endl; }
void CB::print() { cout << "CB-print, a=" << a << ",b=" << b << endl; }
CB::~CB() { cout << "CB destructor" << endl; }
//-------------------------------
//WRAPPER CLASS, that facilitates or manages the HEAP area for CB instances automatiCBlly
//The class consumer need not implement new/delete FUNCTIONS.

class Smartpointer
{
private:
	CB *p;
public:
	Smartpointer(int = 0, int = 0);
	void print();
	~Smartpointer();
	CB* operator &()
	{
		cout << "operator &() CBlled" << endl;
		return p;
	}
	CB* operator ->()
	{
		cout << "operator -> CBlled" << endl;
		return p;
	}
	CB& operator *()
	{
		cout << "operator * CBlled" << endl;
		return *p;
	}

};

Smartpointer::Smartpointer(int x, int y)
{
	p = new(nothrow) CB(x, y);
}

void Smartpointer::print()
{
	p->print();
}

Smartpointer::~Smartpointer()
{
	delete p;
}
//-----------------------

//------------class consumer--------------------
void main()
{
	Smartpointer obj1;
	CB* q = &obj1;
	q->print();
	cout << "------------------" << endl;
	obj1->print();
	cout << "--------------------" << endl;
	(*obj1).print();

}