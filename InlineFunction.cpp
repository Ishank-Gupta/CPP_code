#include <iostream>

using namespace std;

void Add(int, int);

//Inline Function
void main()
{							//Prolog for main()
	Add(10, 20);			//B.logic for main()
}							//Epilog for main()

inline void Add(int a, int b) 
{
	cout << "Sum is " << a + b << endl; 
}

#if 0
int sum(int a, ...)
{
	int b = 0;
	return b += a;
}
void main()
{
	int a = 10, b = 20;
	printf("a = %d, b = %d, %d\n", a, b);

	int c = sum(23, 34, 45);
	cout << c << endl;
}
#endif