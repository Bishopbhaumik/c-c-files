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
public :
    int sub[5];
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
class result:public test{
public:
    int total;
    float perc;
     void resu()
     {
         for(int i=0;i<5;i++)
         {
             total=total+sub[i];
         }
         perc=total/5;
         cout<<"\n Grand Total:"<<total;
         cout<<"Percentage:"<<perc;
     }

};

int main()
{
    result q;
    q.get();
    q.getmark();
    q.show();
    q.resu();
}
