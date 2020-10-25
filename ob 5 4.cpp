#include<iostream>
using namespace std;
class expo
{
    static int c,l;
    public:

        expo ()
        {
            cout<<"Constructor Invoked"<<endl;
            c++;
            cout<<c<<endl;
        }
        ~expo()
        {
            cout<<"Destructor Invoked"<<endl;
            l++;
            cout<<l<<endl;
        }
};
int expo::c;
int expo::l;
int main()
{
    expo ob1;
    expo ob2;
    {
        expo ob3;
    }
    ob2.expo::~expo();
    return 0;
}
