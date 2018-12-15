#include <iostream>

class add {
public:
	static void Add(float a, int b);
};

void add::Add(float a, int b)
{
		std::cout << "add void Add(float a,int b) : " << __FUNCDNAME__ << std::endl;
}

int Add(int a, int b)
{
	std::cout << "int Add(int a, int b)       : " << __FUNCDNAME__ << std::endl;
	return a + b;
}

bool Add(float a, double b)
{
	std::cout << "bool Add(float a, double b) : " << __FUNCDNAME__ << std::endl;
	return a + b;
}

int main()
{

	std::cout << "Raw names for VOID   : " << typeid(void).raw_name() << std::endl;
	std::cout << "Raw names for BOOL   : " << typeid(bool).raw_name() << std::endl;
	std::cout << "Raw names for CHAR   : " << typeid(char).raw_name() << std::endl;
	std::cout << "Raw names for INT    : " << typeid(int).raw_name() << std::endl;
	std::cout << "Raw names for FLOAT  : " << typeid(float).raw_name() << std::endl;
	std::cout << "Raw names for DOUBLE : " << typeid(double).raw_name() << std::endl;
	std::cout << "\n\n";
	Add(2, 3);
	add::Add(2.23f, 3);
	Add(2.23f, 2.23);

	system("pause");
}