#include<iostream>

using namespace std;

class flute {
public:
	void play() { cout << "Playing flute......" << endl; }
};
class piano {
public:
	void play() { cout << "Playing piano......" << endl; }
};
class drums {
public:
	void play() { cout << "Playing drums......" << endl; }
};

template<typename T1, typename T2, typename T3> class compose {
private:
	T1 obj1; 
	T2 obj2;
	T3 obj3;

public:
	void compose_music();
};
template<typename T1, typename T2, typename T3> 
void compose<T1,T2,T3>::compose_music() 
{
	obj1.play();
	obj2.play();
	obj3.play();
}

int main()
{
	compose<flute, drums, piano> music1;
	music1.compose_music();
	cout << "-----------" << endl;
	compose<drums, piano, flute> music2;
	music2.compose_music();
}