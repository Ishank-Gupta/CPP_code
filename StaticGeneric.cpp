#include<iostream>

using namespace std;

template<typename T> class CA {
private:
	T a;
	static int b;
public:
	CA(T x);
	void print();
	static void count();
};

//********define memory for the static data**********//
template<typename T>
CA<T>::CA(T x) :a(x) { b += 1; }

template<typename T>
int CA<T>::b;

template<typename T>
void CA<T>::count() { cout << "Object of type " << typeid(T).name() << " = " << b << end; }

template<typename T>
void CA<T>::print() { cout << "A = " << a << "\nB = " << b << endl; }

int main()
{
	CA<int> obj1(10), obj2(20);
	obj2.print();

	CA<float> obj3(45.12f);
	obj3.print();

	CA<double> obj4(67.90), obj5(56.12), obj6(94.16);
	obj6.print();

	CA<int>::count();
	CA<float>::count();
	CA<double>::count();

}