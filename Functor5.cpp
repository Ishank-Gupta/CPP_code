#include<iostream>

using namespace std;

template<typename CType, typename FType> class MyFunction
{
private:
	CType obj;
	FType fp;
public:
	MyFunction(FType ff) :fp(ff) {}
	MyFunction(CType &x, FType ff) :obj(x), fp(ff) {}

	void operator ()() { (obj.*fp)(); }
};

class CA {
public:
	void print() { cout << "CA-print called." << endl; }
};

class CB {
public:
	void result() { cout << "CB-result called." << endl; }
};

int main()
{
	MyFunction<CA, void(CA::*)()> fobj1(&CA::print);
	fobj1();
	cout << "------------------------------" << endl;
	MyFunction<CB, void(CB::*)()> fobj2(&CB::result);
	fobj2();
}