#include<iostream>
#include<list>

using namespace std;

int main()
{
	list<int> lst1{ 10,9,8,7,6,5,4,3,2,1 };
	cout << "Contents of the list before sorting..." << endl;
	//Range-FOR constructor - MODERN CPP
	for (auto x : lst1)
	{
		cout << x << " ";
	}
	cout << endl;

	lst1.sort();
	cout<<"Contents of the list after sorting..." << endl;
	for (auto x : lst1)
	{
		cout << x << " ";
	}
	cout << endl;
}
