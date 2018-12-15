#include<iostream>

class CA {

private:
	int a,b;
public:
    void _cdecl input()
	{
		std::cout << "input() function name in ASM is " << __FUNCDNAME__ << std::endl;
		std::cout << "Enter the two number : ";
		std::cin >> a >> b;
	}
	void _cdecl print()
	{
		std::cout << "print() function name in ASM is " << __FUNCDNAME__ << std::endl;
		std::cout << "A = " << a << "\nB = " << b << std::endl;
	}
	 //friend int main();
};

extern "C++" int _cdecl main()
{
	std::cout << "Size of the object : " << sizeof(CA) << std::endl;
	CA obj1;
	obj1.input();
	//obj1.a += 100;
	//obj1.b += 200;
	obj1.print();
}