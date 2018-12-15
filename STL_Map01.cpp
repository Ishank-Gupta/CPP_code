#include<iostream>
#include<map>
#include<string>

using namespace std;

int main()
{
	map<int, string> m;
	m[1] = "John";
	m[2] = "Peter";
	m[3] = "Simon";
	m[2] = "Name";

	m.insert(pair<int, string>(4, "Clara"));
	map<int, string>::iterator itr;
	itr = m.begin();
	while (itr != m.end())
	{
		cout << itr->first << "\t" << itr->second << endl;
		++itr;
	}

	int key;
	cout << "Enter the key : ";
	cin >> key;
	itr = m.find(key);
	if (itr != m.end())
		cout << itr->second << endl;
	else
		cout << "Not found." << endl;

}