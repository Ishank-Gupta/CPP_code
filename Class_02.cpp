#include<iostream>

class CA {

private:
	int a, b;
public:
	void input();	// void input(CA* const this)
	void print();	// void print(CA* const this)

	//friend int main();
};

void CA::input()
{
	std::cout << "Enter the two number : ";
	std::cin >> this->a >> this->b;
}

void CA::print()
{
	std::cout << "A = " << a << "\nB = " << b << std::endl;
}

int main()
{
	std::cout << "Size of the object : " << sizeof(CA) << std::endl;
	CA obj1;
	obj1.input();	//CA::input(&obj1)
	//obj1.a += 100;
	//obj1.b += 200;
	obj1.print();	//CA::print(&obj1)
}