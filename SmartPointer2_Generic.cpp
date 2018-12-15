#include<iostream>
using namespace std;
//An example on Smartpointer technique

class CA  //assumed to be memory expensive
{
private:
	int a, b;
public:
	CA(int x = 0, int y = 0) :a(x), b(y) { cout << "CA constructor" << endl; }
	void print() { cout << "a = " << a << ",b = " << b << endl; }
	~CA() { cout << "CA destructor" << endl; }
};

class CB  //assumed to be memory expensive
{
private:
	int a, b;
public:
	CB(int x = 0, int y = 0) :a(x), b(y) { cout << "CB constructor" << endl; }
	void print() { cout << "a = " << a << ",b = " << b << endl; }
	~CB() { cout << "CB destructor" << endl; }
};

//A smart pointer class which automatically cleans the objects on the heap 
//without burdening with this additional task on the part of the consumer.
template<typename T>class Smartpointer
{
private:
	T *p;
public:
	Smartpointer() :p(NULL) { }
	Smartpointer(T *x) :p(x) { }
	~Smartpointer()
	{
		if (p != NULL)
			delete p;
	}
	Smartpointer& operator =(Smartpointer &x)
	{
		if (((x.p) != NULL) && (this->p == NULL))
		{
			p = new(nothrow) T(*(x.p));
		}
		else if (((x.p) != NULL) && (this->p != NULL))
		{
			*(this->p) = *(x.p);
		}
		return x;
	}
	void operator =(T *x)
	{
		if (p != NULL)
		{
			delete p;
		}
		p = x;
	}
	//COPY CONSTRUCTOR
	Smartpointer(Smartpointer &x)
	{
		if ((x.p) != NULL)
		{
			p = new(nothrow) T(*(x.p));
		}
		else
			p = NULL;
	}
	T* operator ->()
	{
		if (p == NULL)
			p = new(nothrow) T;
		return p;
	}
	T* operator &()
	{
		if (p == NULL)
			p = new(nothrow) T;
		return p;
	}
	T& operator *()
	{
		if (p == NULL)
			p = new(nothrow) T;
		return *p;
	}
	void Release()
	{
		if (p != NULL)
			delete p;
	}
};

void main()
{
	Smartpointer<CA> s1 = new(nothrow) CA(100);
	s1->print();
	Smartpointer<CA> s2;
	s2->print();
	Smartpointer<CA> s3(s1);
	s3->print();
	//=======================

	Smartpointer<CB> b1 = new(nothrow) CB(100);
	b1->print();
	Smartpointer<CB> b2;
	b2->print();
	Smartpointer<CB> b3(b1);
	b3->print();

}

