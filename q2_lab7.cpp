#include<iostream>
using namespace std;
class Student
{
	private:
        char name[100];
        int roll;
        int age;
	public:
        void input()
        {
            cout<<"Enter the name of the Student: ";
            cin.getline(name,100);
            cout<<"Enter roll number of the Student: ";
            cin>>roll;
            cout<<"Enter age of the Student: ";
            cin>>age;
        }
        void display()
        {
            cout<<"\nThe name of the Student is: ";
            puts(name);
            cout<<"The roll number of the Student is: "<<roll<<endl;
            cout<<"The age of the Student is: "<<age<<endl;
        }
};
class test:public Student
{
	protected:
        float marks[5];
	public:
        void inputmarks()
        {
            int i;
            cout<<"Enter marks of 5 subs:"<<endl;
            for(i=0;i<5;i++)
               cin>>marks[i];
        }
        void show()
        {
            int i;
            cout<<"The marks for 5 subjects are  :	"<<endl;
            for(i=0;i<5;i++)
            {
                cout<<"Subject "<<i+1<<" : "<<marks[i]<<endl;
            }
        }
};
int main()
{
    test obj;
	obj.input();
	obj.inputmarks();
	obj.display();
	obj.show();
	return 0;
}
