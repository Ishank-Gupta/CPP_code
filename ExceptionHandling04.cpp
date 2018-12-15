#include <iostream>

using namespace std;

void graceful()
{
	cout << "Exception encountered at termination pointer..." << endl;
	cout << "Handled all exception..., exiting gracefully." << endl;
	exit(0);
}

int main()
{
	set_terminate(graceful);
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
		throw;
	}


}