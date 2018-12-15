#include <iostream>

class CA {
private:
	mutable int a, b;
public:
	CA();
	CA(int x);
	CA(int x, int y);
	CA(const CA &n);
	~CA();

	void input() const;
	void print() const;

};

CA::CA() { std::cout << "Default constructor called." << std::endl; }
CA::CA(int x) : a(x), b(x) { std::cout << "Single parametrized constructor called." << std::endl; }
CA::CA(int x, int y) : a(x), b(y) { std::cout << "Double parametrized constructor called." << std::endl; }
CA::~CA() { std::cout << "Destructor called." << std::endl; std::cin.get(); }
CA::CA(const CA &n) : a(n.a), b(n.b) { std::cout << "Copy constructor called." << std::endl; }

void CA::print() const { std::cout << "A = " << a << ", B = " << b << std::endl; }
void CA::input() const
{
	std::cout << "Enter the two numbers : ";
	std::cin >> this->a >> this->b;
}

int main()
{
	CA obj;
	obj.input();
	obj.print();
	CA obj1(obj);
	std::cin.get();
}
