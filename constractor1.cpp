#include<iostream>
using namespace std;
class complex 

{
	public:
    int x,y;
    complex()
    {
        cout<<"Default constructor invoked \n";
        x=10;
        y=20;
    }
    complex(int a,int b)
    {
        cout<<"Parameterised constructor has been invoked: "<<endl;
        x=a;
        y=b;
    }
    complex(complex &p)
    {
        cout<<"Copy constructor has been invoked: "<<endl;
        x = p.x;
        y = p.y;
    }
    ~complex()
    {
        cout<<"Destructor invoked.";
    }
    void display()
    {
        cout<<"The complex number is : "<<x<<" + "<<y<<"i"<<endl;
    }
};
int main()
{
    complex c;
    c.display();
    int x,y;
    cout<<"Enter the real and imaginary part :"<<endl;
    cin>>x>>y;
    complex c2(x,y);
    c2.display();\
    complex c3(c);
    c3.display();
    return 0;
}