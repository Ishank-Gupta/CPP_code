#include <iostream>

using namespace std;
// An example of dynamic cast.
class Shape {
public:
	virtual void draw() = 0;
};

class Circle : public Shape {
public:
	void draw() {  }
};

class Rectangle : public Shape {
public:
	void draw() {  }
};

void FindShape(Shape *x)
{
	Circle *c = dynamic_cast<Circle*>(x);
	Rectangle *r = dynamic_cast<Rectangle*>(x);
	if (c != NULL)
		cout << "The object pointed by x is circle." << endl;
	if (r != NULL)
		cout << "The object is pointed by x is rectangle." << endl;
}

int main()
{
	Circle *c = new(nothrow) Circle;
	FindShape(c);
	delete c;
}