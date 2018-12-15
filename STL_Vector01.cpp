#include <iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> v1(10);
	cout << "The capacity of v1 is : " << v1.capacity() << endl;
	vector<int> v2;
	cout << "The capacity of v2 is : " << v2.capacity() << endl;
	// max_size():
	cout << "The max size of v1 is : " << v1.max_size() << endl;
	cout << "The max size of v2 is : " << v2.max_size() << endl;
	
	vector<char> v3;
	cout << "The max size of v3 is : " << v3.max_size() << endl;

}