#include <iostream>
//#pragma pack(1)

using namespace std;

class circle
{
protected:
	// void *vptr;   -> an invisible member added into the class by the compiler.
private:
	int radius;
public:
	circle(int x = 0) :/* vfptr(&circle::VTABLE), */ radius(x) { cout << "Circle constructor" << endl; }
	//Virtual member function (or) OVER-RIDABLE methods.
	virtual void draw() { cout << "circle drawn" << endl; }
	virtual ~circle() { cout << "Circle destructor" << endl; }
};

class rectangle : public circle
{
private:
	int length, breadth;
public:
	rectangle(int x = 0, int y = 0) : /* circle(), vfptr(&rectangle::VTABLE), */ length(x), breadth(y) 
	{
		cout << "rectangle constructor" << endl; 
	}
	void draw() { cout << "rectangle drawn" << endl; }
	~rectangle() { cout << "rectangle destructor" << endl; }
};

class triangle : public circle
{
private:
	int base, height;
public:
	triangle(int x = 0, int y = 0) : /* circle(), vfptr(&triangle::VTABLE), */ base(x), height(y) 
	{
		cout << "triangle constructor" << endl; 
	}
	void draw() { cout << "triangle drawn" << endl; }
	~triangle() { cout << "triangle destructor" << endl; }
};

class polygon : public circle
{
private:
	int length;
public:
	polygon(int x = 0) : /* circle(), vfptr(&triangle::VTABLE), */ length(x)
	{
		cout << "Polygon constructor." << endl;
	}
	void draw() { cout << "Polygon drawn." << endl; }
	~polygon() { cout << "Polygon destructor." << endl; }
};

void graphics(circle *);

void main()
{
	cout << "size of circle object " << sizeof(circle) << endl;
	cout << "size of rectangle object " << sizeof(rectangle) << endl;
	cout << "size of triangle object " << sizeof(triangle) << endl;
	cout << "size of polygon object " << sizeof(polygon) << endl;

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

void graphics(circle *p)
{
	p->draw();
	//...
	delete p;
}