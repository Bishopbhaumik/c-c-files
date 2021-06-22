#include<iostream>
using namespace std;
class demo
{
    static int count1,count2;
    public:
        demo ()
        {
            cout<<"Constructor Invoked"<<endl;
            count1++;
            cout<<count1<<endl;
        }
        ~demo()
        {
            cout<<"Destructor Invoked"<<endl;
            cout<<count1--<<endl;
        }
};
int demo::count1;
int demo::count2;
int main()
{
    demo d1;
    demo d2;
    {
        demo d3;
    }
    return 0;
}
