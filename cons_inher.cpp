#include <iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout << "Inside first base class" << endl;
    }
    ~A()
    {
    	cout<<"Destructor invoked for Class A."<< endl;
	}
};
class B
{
    public:
    B()
    {
        cout << "Inside second base class" << endl;
    }
	~B()
    {
    	cout<<"Destructor invoked for Class B."<< endl;
	}
};

class C : public A, public B
{
    public:
    C()
    {
        cout << "Inside child class" << endl;
    }
    ~C()
    {
    	cout<<"Destructor invoked for Class C."<< endl;
	}
};
int main()
{
    C obj;
    return 0;
}