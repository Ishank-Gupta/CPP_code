#include <iostream>

using namespace std;

namespace Altair 
{
	void fun1() { cout << "Fun-1 from Altair." << endl; }
	void fun2() { cout << "Fun-2 from Altair." << endl; }
}

namespace Hyperworks
{
	void fun2() { cout << "Fun-2 from Hyperworks." << endl; }
	void fun3() { cout << "Fun-3 from Hyperworks." << endl; }
}
 
int main()
{
	//Altair::fun1();
	//Altair::fun2();
	using namespace Altair;
	fun1();
	fun2();

	//Hyperworks::fun2();
	//Hyperworks::fun3();
	using namespace Hyperworks;
	Hyperworks::fun2();
	fun3();
}
