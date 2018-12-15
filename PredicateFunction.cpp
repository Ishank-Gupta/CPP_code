#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Ascending
{
public:
	bool operator()(int &x, int &y)         // fonctor returning bool - predicate
	{
		if (x < y)
			return true;
		else
			return false;
	}
};

class Descending
{
public:
	bool operator()(int &x, int &y)         // fonctor returning bool - predicate
	{
		if (x > y)
			return true;
		else
			return false;
	}
};

void main()
{
	Ascending o1;
	Descending o2;

	vector<int> v1;
	for (int i = 1; i <= 10; i++)
	{
		v1.push_back(i);
	}

	vector<int>::iterator itr = v1.begin();

	cout << endl << "original contents of the vector before sorting" << endl;
	while (itr != v1.end())
	{
		cout << *itr << "  ";
		itr++;
	}

	//Descending sort.
	sort(v1.begin(), v1.end(), o2);
	cout << endl << "contents of the vector after sorting in descending" << endl;

	itr = v1.begin();
	while (itr != v1.end())
	{
		cout << *itr << "  ";
		itr++;
	}
	cout << endl;

	//Ascending sort.
	sort(v1.begin(), v1.end(), o1);
	cout << endl << "contents of the vector after sorting in descending" << endl;

	itr = v1.begin();
	while (itr != v1.end())
	{
		cout << *itr << "  ";
		itr++;
	}
	cout << endl;

}
