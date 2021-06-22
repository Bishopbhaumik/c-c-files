/*WAP to add two objects of distance class. Overload the operator ‘>’ to compare two objects 
and return the object with larger time value and display it. Overload the ‘==’ operator to 
compare and display whether two given objects contain same distance value.*/
//distance class 
#include<iostream>
using namespace std;
class dist
{
    public: 
    int f;
    int i;
    dist(){f=0;i=0;}
    dist(int a,int b)
	{
        f=a;
        i=b;
    }
    
    dist operator>(dist d)
	{
        if(f>d.f) return *this;
        else if(f==d.f&&i<d.i) return d;
        else if(f==d.f&&i>d.i) return *this;
        else return d;
        
    }
    bool operator==(dist d)
	{
        if(f==d.f&&i==d.i)
		 return 1;
        return 0;
    }
    void display()
	{
        cout<<f<<" "<<i<<endl;
    }
};
int main()
{	
    int a,b;
    cout<<"Enter d1: ";cin>>a>>b;dist d1(a,b);
    cout<<"Enter d2: ";cin>>a>>b;dist d2(a,b);
    dist c;
    c=d1>d2;
    cout<<"Larger: ";c.display();
    if(d1==d2) cout<<"Equal";
    else cout<<"Unequal";
    return 0;
}
