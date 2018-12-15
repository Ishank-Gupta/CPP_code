#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class CA {
private:
	int a;
public:
	CA(int x = 0): a(x) {  }
	int get() { return a; }

};

int main()
{
	vector<CA> v1 = { CA{ 10 },CA{ 20 },CA{ 30 },CA{ 40 },CA{ 50 } };

	int bonus = 35;
	int total = 0;
	/*
	auto process = [&](CA &x) -> void
	{
		total = total + bonus + x.get();
	};

	for_each(v1.begin(), v1.end(), process);
	*/

	for_each(v1.begin(), v1.end(), [&](CA &x)
	{
		total = total + bonus + x.get();
	});

	cout << "Total = " << total << ".\n";
}