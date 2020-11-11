#include <iostream>
using namespace std;
class A
{
  public:
     int a;
     A()
     {
         a=50;
         cout << "Inside first base class" << endl;
     }
     ~A()
     {
         cout<<"Destructor invoked for Class A."<< endl;
	 }
};

class B : public virtual A
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

class C : public virtual A
{
  public:
    C()
    {
        cout << "Inside third base class" << endl;
    }
    ~C()
    {
    	cout<<"Destructor invoked for Class C."<< endl;
	}
};

class D : public B, public C
{
   public:
    D()
    {
        cout << "Inside child class" << endl;
    }
    ~D()
    {
    	cout<<"Destructor invoked for Class D."<< endl;
	}
};

int main()
{
    D obj;
    cout << "A = " << obj.a << endl;
    return 0;
}
