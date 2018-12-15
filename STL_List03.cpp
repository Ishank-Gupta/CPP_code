#include<iostream>
#include<list>

using namespace std;

class CA {
private:
	int a, b;
public:
	CA(int x = 0, int y = 0) :a(x), b(y) {}
	void print() const { cout << "A = " << a << ", B = " << b << endl; }
};

int main()
{
	list<CA> lst1;
	for (int i = 1; i <= 10; ++i)
	{
		lst1.push_back(CA(i, i + 10));
	}
	//iterate the container
	list<CA>::iterator itr = lst1.begin();
	while (itr != lst1.end())
	{
		itr->print();
		++itr;
	}

	/*
		Range Constructor
		for(auto &x:lst1)
		{
			x.print();
		}
	*/
}