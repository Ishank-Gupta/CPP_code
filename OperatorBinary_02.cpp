#include <iostream>

using namespace std;

class CA {

private:
	int a, b;
public:
	CA(int = 0, int = 0);
	void print() const;
	CA operator +(CA &x);
	CA operator *(CA &x);
};

CA::CA(int x, int y) : a(x), b(y) {}
void CA::print() const { cout << "A = " << a << "\nB = " << b << endl; }

CA CA::operator +(CA &x)
{
	cout << "Operator + Called" << endl;
	CA temp;
	temp.a = this->a + x.a;
	temp.b = this->b + x.b;
	return temp;

}

CA CA::operator *(CA &x)
{
	cout << "Operator * Called" << endl;
	CA temp;
	temp.a = this->a * x.a;
	temp.b = this->b * x.b;
	return temp;

}

int main()
{
	CA obj1(10, 20), obj2(30, 40), obj3(50, 60);
	CA result;

	result = obj1 + obj2;
	result.print();
	result = obj1 + obj2 * obj3;	// result = obj1.operator +((obj2).operator *(obj3));
	result.print();
}