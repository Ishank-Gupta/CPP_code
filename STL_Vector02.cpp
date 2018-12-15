#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> v;
	for (int i = 0; i < 5; ++i)
		v.push_back(i);

	cout << "The first element of vector is : " << v.front() << endl;
	cout << "The last element of vector is : " << v.back() << endl;


}