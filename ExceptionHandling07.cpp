
#include <iostream>

using namespace std;

class Error {
public:
	virtual const char* what() = 0;
};

class Error1 : public Error {
public:
	const char* what() { return "Error-1 exception."; }
};

class Error2 : public Error {
public:
	const char* what() { return "Error-2 exception."; }
};

class Error3 : public Error {
public:
	const char* what() { return "Error-3 exception."; }
};

int main()
{
	try
	{
		//....
		throw Error2();
	}

	catch (Error &x) { cout << x.what() << endl; }
}