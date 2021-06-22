#include<iostream>
using namespace std;
class count_num
{
    static int c;
    public:
        count_num()
        {
            cout<<"Constructor Invoked :"<<endl;
            c++;
        }
        void display()
        {
            cout<<"Number of times an object was created is :"<<c<<endl;
        }
};
int count_num::c;
int main()
{
    int n=0;
    while(n==0)
    {
        count_num cn;
        cout<<"Enter 1 to exit, 0 to run again "<<endl;
        cin>>n;
        if(n==1)
            cn.display();
    }

}

