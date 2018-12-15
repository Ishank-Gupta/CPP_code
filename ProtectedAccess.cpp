#include<iostream>

using namespace std;

class CA {
protected:
	int a, b;
public:
	void input()
	{
		cout << "CA-Input, Enter the two number : ";
		cin >> a >> b;
	}
	void print() { cout << "CA-print, A = " << a << ", B = " << b << endl; }
};

class CB : protected CA {
private:
	int a = 0, b = 0;
public:
	void input()
	{
		cout << "CB-Input, \nEnter the four number : ";
		cin >> CA::a >> CA::b;
		cin >> CB::a >> CB::b;
	}
	void print() 
	{ 
		cout << "CA-print, A = " << CA::a << ", B = " << CA::b << endl;
		cout << "CB-print, A = " << CB::a << ", B = " << CB::b << endl; 
	}
};

int main()
{
	cout << "Size of the class CB : " << sizeof(CB) << endl;
	CB obj;
	//obj.CA::input();
	//obj.CA::print();

	obj.CB::input();
	obj.CB::print();
}