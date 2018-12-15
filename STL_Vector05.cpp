#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<char> alphaVector;
	for (int i = 0; i < 10; ++i)
		alphaVector.push_back(i + 65);

	vector<char>::iterator theIterrator = alphaVector.begin();
	alphaVector.insert(theIterrator, 4, 'C');

	for (theIterrator = alphaVector.begin(); theIterrator != alphaVector.end(); ++theIterrator)
		cout << *theIterrator << "  ";
	cout << endl;

}