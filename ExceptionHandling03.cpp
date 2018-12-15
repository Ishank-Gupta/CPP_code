#include <iostream>

using namespace std;

int main()
{
	try
	{
		//...
		try
		{
			int a = 10;
			throw a;
		}
		catch (int &y)
		{
			cout << "catch-int INNER." << endl;
			// Re throwing exception.
			throw;
		}

	}
	catch (int &x)
	{
		cout << "catch-int OUTER." << endl;
	}

}