#include <iostream>
#include <vector>

using namespace std;

void main()
{
	vector<int> v1;
	v1.push_back(0);
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	vector<int> v2;
	v2.push_back(5);
	v2.push_back(6);
	v2.push_back(7);
	v2.push_back(8);

	cout << "before, v2 is: ";

	for (int i = 0; i < v2.size(); i++)
	{
		cout << v2[i] << " ";
	}
	cout << endl;

	v2.insert(v2.end(), v1.begin(), v1.end());

	cout << "after, v2 is: ";

	for (int i = 0; i < v2.size(); i++)
	{
		cout << v2[i] << " ";
	}
	cout << endl;
}

