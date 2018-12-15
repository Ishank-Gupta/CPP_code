#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v1 = { 10,20,30,40,50,60,70,80,90,100 };
	int bonus = 35;
	int total = 0;

	auto process = [&](int x) -> void 
	{
		total = total + bonus + x;
	};
	
	for_each(v1.begin(), v1.end(), process);
	cout << "Total = " << total << ".\n";
}