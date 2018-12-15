#include<iostream>
using namespace std;
// An example on simple smart pointer class
class CA //assumed to be memory expensive class
{
private:
	int a, b;
public:
	CA(int = 0, int = 0);
	void print();
	~CA();
};

CA::CA(int x, int y) :a(x), b(y) { cout << "CA constructor" << endl; }
void CA::print() { cout << "CA-print, a = " << a << ", b = " << b << endl; }
CA::~CA() { cout << "CA destructor" << endl; }

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
void CB::print() { cout << "CA-print, a=" << a << ",b=" << b << endl; }
CB::~CB() { cout << "CB destructor" << endl; }
//-------------------------------
//WRAPPER CLASS, that facilitates or manages the HEAP area for CA instances automatically
//The class consumer need not implement new/delete FUNCTIONS.

template<typename T> class Smartpointer
{
private:
	T *p;
public:
	template<typename T1, typename T2>Smartpointer(T1 x, T2 y) { p = new(nothrow) T(x, y); }

	void print();
	~Smartpointer();
	//**custom copr constructor** DEEP COPY, AVOIDS DANGLING POINTER
	Smartpointer(const Smartpointer &x)
	{
		p = new(nothrow) T(*(x.p));
	}
	//**custom copr constructor** DEEP ASSIGNMENT, AVOIDS MEMORY LEAK
	Smartpointer& operator = (Smartpointer &x)
	{
		*(this->) = *(x.p);
		return *this;
	}
	T* operator &()
	{
		cout << "operator &() called" << endl;
		return p;
	}
	T* operator ->()
	{
		cout << "operator -> called" << endl;
		return p;
	}
	T& operator *()
	{
		cout << "operator * called" << endl;
		return *p;
	}

};

//template<typename T> Smartpointer<T>::Smartpointer(int x, int y)
//{
//	p = new(nothrow) T(x, y);
//}

template<typename T>void Smartpointer<T>::print()
{
	p->print();
}

template<typename T> Smartpointer<T>::~Smartpointer()
{
	delete p;
}
//-----------------------

//------------class consumer--------------------
void main()
{
	Smartpointer<CA> s1(10, 20);
	Smartpointer<CB> s2(40, 50);

}