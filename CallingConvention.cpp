#include <iostream>


extern "C" void _cdecl Add(int a, int b)
{
	std::cout << "\nName of int add in asm is " << __FUNCDNAME__ << std::endl;
	std::cout << a << " + " << b << " = " << a + b << std::endl;
}

extern "C++" void Add(float a, float b)
{
	std::cout << "\nName of float add in asm is " << __FUNCDNAME__ << std::endl;
	std::cout << a << " + " << b << " = " << a + b << std::endl;
}

int main()
{
	Add(2, 3);
	Add(23.3f, 22.0f);
	std::cin.get();
}