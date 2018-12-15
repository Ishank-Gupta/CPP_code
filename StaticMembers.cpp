#include <iostream>

using namespace std;


class CA {
private:
	int a;
	static int b;

public:
	CA(int = 0);
	void print() const;
	static void count();		// void cout();
};

int CA::b = 0;
CA::CA(int x) : a(x) { b = b + 1; }
void CA::print() const { cout << "A = " << this->a << "\nB = " << this->b << endl; }
void CA::count() {  cout << "Total object = " << b << endl; }

int main()
{
	
	CA obj1(100);
	cout << "Size of the object = "<<sizeof(obj1) << endl;
	//obj1.print();
		
	CA obj2(200);
	//obj2.print();
	
	CA obj3(300);
	//obj1.print();

	//obj1.count();
	//obj2.count();
	//obj3.count();
	CA::count();
}