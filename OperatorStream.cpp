#include<iostream>

using namespace std;

class CA {
private:
	int a, b;
	friend istream& operator >> (istream &input, CA &obj);
	friend ostream&	operator << (ostream &print, CA &obj);
};

istream& operator >> (istream &input, CA &ob)
{
	cout << "Operator >> called." << endl;
	cout << "Enter the two numbers : ";
	input >> ob.a >> ob.b;
	return input;
}

ostream& operator << (ostream &print, CA &ob)
{
	cout << "Operator << called." << endl;
	cout << "A = " << ob.a << "\nB = " << ob.b << endl;
	return print;
}

int main()
{
	CA obj1, obj2;
	//cin >> obj1;				// operator >>(cin, obj1)
	//cout << obj1;				// operator <<(cout, obj2)
	cin >> obj1 >> obj2;		// operator >> (operator >> (cin, obj1), obj2)
	cout << obj1 << obj2;		// operator << (operator << (cin, obj1), obj2)
}