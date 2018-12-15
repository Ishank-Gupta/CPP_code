#include<iostream>

using namespace std;

class CA {
private:
	int a, b;
public:
	void input()
	{
		cout << "CA-Input, Enter the two number : ";
		cin >> a >> b;
	}
	void print() { cout << "CA-print, A = " << a << ", B = " << b << endl; }
};

class CB : private CA {
private:
	int a = 0, b = 0;
public:
	void input()
	{
		cout << "CB-Input, Enter the two number : ";
		cin >> a >> b;
	}
	void print() { cout << "CB-print, A = " << a << ", B = " << b << endl; }
};

int main()
{
	cout << "Size of the class CB : " << sizeof(CB) << endl;
	CB obj;
	obj.input();
	obj.print();
}