#include <iostream>

using namespace std;
// An example exception handling mechanism with the help of TRY-CATCH blocks.

void divide(int x, int y)
{
	cout << "Divide execution started..." << endl;
	if (y == 0)
		throw y;
	cout << "Quotient is " << x / y << endl;
	cout << "Divide execution completed..." << endl;
}

int main()
{
	cout << "Main execution started..." << endl;
	try
	{
		divide(10, 0);
	}
	catch (int x)
	{
		cout << "Exception from divide, Cannot divide by " << x << ".\n";
	}
	catch (...)
	{
		cout << "Exception from divide." << endl;
	}

	cout << "Main execution started..." << endl;
}