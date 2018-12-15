#include <iostream>
//#pragma pack(1)

using namespace std;
// - Introduce a layer class, whose purpose is to only act as a base kind & serve as a frame-work for the derived one.
// - Instance of this class shall not be permitted as he is a generalized class.


class shape {

protected:
	// void *vptr;   -> an invisible member added into the class by the compiler.

public:
	/*
	shape():vfptr(&shape::VTABLE)
	{
	// A default constructor assumed by the compiler on the behalf.
	}
	*/
	//OVER-RIDABLE METHODS.
	virtual void draw() = 0;	// Pure virtual function.
	virtual ~shape() { }
};

class circle : public shape
{
private:
	int radius;
public:
	circle(int x = 0) :/* shape(), vfptr(&circle::VTABLE), */ radius(x)
	{
		cout << "Circle constructor" << endl;
	}
	// OVER-RIDING methods.
	void draw() { cout << "circle drawn" << endl; }
	~circle() { cout << "Circle destructor" << endl; }
};

class rectangle : public shape
{
private:
	int length, breadth;
public:
	rectangle(int x = 0, int y = 0) : /* shape(), vfptr(&rectangle::VTABLE), */ length(x), breadth(y)
	{
		cout << "rectangle constructor" << endl;
	}
	void draw() { cout << "rectangle drawn" << endl; }
	~rectangle() { cout << "rectangle destructor" << endl; }
};

class triangle : public shape
{
private:
	int base, height;
public:
	triangle(int x = 0, int y = 0) : /* shape(), vfptr(&triangle::VTABLE), */ base(x), height(y)
	{
		cout << "triangle constructor" << endl;
	}
	void draw() { cout << "triangle drawn" << endl; }
	~triangle() { cout << "triangle destructor" << endl; }
};

class polygon : public shape
{
private:
	int length;
public:
	polygon(int x = 0) : /* shape(), vfptr(&triangle::VTABLE), */ length(x)
	{
		cout << "Polygon constructor." << endl;
	}
	void draw() { cout << "Polygon drawn." << endl; }
	~polygon() { cout << "Polygon destructor." << endl; }
};

class shapefactory {
public:
	template<typename T> T* FactoryMethod()
	{
		return new(nothrow) T;
	}
};

int main()
{
	shapefactory sf;
	cout << "---------------------------------\n";
	circle *c = sf.FactoryMethod<circle>();
	c->draw();
	delete c;
	cout << "---------------------------------\n";
	rectangle *r = sf.FactoryMethod<rectangle>();
	r->draw();
	cout << "---------------------------------\n";
	triangle *t = sf.FactoryMethod<triangle>();
	t->draw();
	delete t;
	cout << "---------------------------------\n";
	polygon *p = sf.FactoryMethod<polygon>();
	p->draw();
	delete p;
	cout << "---------------------------------\n";
}