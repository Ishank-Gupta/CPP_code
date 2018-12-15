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

void graphics(shape *);

void main()
{
	cout << "size of circle object " << sizeof(circle) << endl;
	cout << "size of rectangle object " << sizeof(rectangle) << endl;
	cout << "size of triangle object " << sizeof(triangle) << endl;
	cout << "size of polygon object " << sizeof(polygon) << "\n\n";

	circle *c = new(nothrow) circle;
	graphics(c);
	cout << "-----------------------" << endl;

	rectangle *r = new(nothrow) rectangle;
	graphics(r);
	cout << "-----------------------" << endl;

	triangle *t = new(nothrow) triangle;
	graphics(t);
	cout << "-----------------------" << endl;

	polygon *p = new(nothrow) polygon;
	graphics(p);
}

void graphics(shape *p)
{
	p->draw();
	//...
	delete p;
}