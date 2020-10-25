#include <iostream>
using namespace std;

class student
{
	public:
		char  name[30];
		int   rollNo;
		int   age;
};
class test:public student{
int sub[5];
public :
    void get()
    {
        cout<<"enter Name :";
        cin>>name;
            cout<<"enter roll:";
            cin>>rollNo;
            cout<<"enter age:";
            cin>>age;

    }
    void getmark()
    {
        cout<<"enter the no of 5 subjects:";
        for(int i=0;i<5;i++)
            cin>>sub[i];
    }
void show()
{
    cout<<"Name:"<<name<<endl;
    cout<<"Roll:"<<rollNo<<endl;
    cout<<"age:"<<age<<endl;
    cout<<"subjects:";
    for(int i=0;i<5;i++)
        cout<<sub[i]<<endl;
}
};
int main()
{
    test q;
    q.get();
    q.getmark();
    q.show();
}
