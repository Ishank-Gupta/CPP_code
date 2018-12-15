#include<iostream>

class CA {

private:
	mutable int a, b;
public:
	/*
		Any member function that does a WRITE operation on an object, is also called as - MUTATOR method, SET method or SETTER.
		Any member function that does a READ operation on an object, is also called as -  GET method or GETTER.
	*/
	void input() const;	// void input(CA* const this)
	void print() const;	// void print(CA* const this)
};

void CA::input() const
{
	std::cout << __FUNCDNAME__ << std::endl;
	std::cout << "Enter the two number : ";
	std::cin >> this->a >> this->b;
}

void CA::print() const
{
	std::cout << __FUNCDNAME__ << std::endl;
	std::cout << "A = " << a << "\nB = " << b << std::endl;
}

int main()
{
	std::cout << "Size of the object : " << sizeof(CA) << std::endl;
	
	const CA obj1;
	obj1.input();	//CA::input(&obj1)
	obj1.print();	//CA::print(&obj1)
}