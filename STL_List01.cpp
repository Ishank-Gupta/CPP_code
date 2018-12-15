#include<iostream>
#include<list>

using namespace std;

int main()
{
	list<int> lst1;
	cout << "Initial the size of the list is : " << lst1.size() << endl;
	// add few nodes onto the list
	for (int i = 1; i <= 10; ++i)
	{
		lst1.push_back(i);
	}
	list<int>::iterator itr = lst1.begin();
	while (itr != lst1.end())
	{
		cout << *itr << ", ";		//cout<<itr.operator *();
		++itr;						//itr.operator ++(int)
	}
	cout << endl;
	lst1.sort();
	cout << "After sorting, the list contents are..." << endl;

}