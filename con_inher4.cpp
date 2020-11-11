/*Extend the program ii of inheritance to include a class sports,which stores the marks in
sports activity.Derive the result class from the classes 'test' and 'sports'.Create objects 
using parameterized constructors.Calculate the total marks and percentage of a student*/
#include <iostream>
#include <string>
using namespace std;
class student
{
	public:
		string name;
		int roll;
		int age;
		student(string name,int roll,int age)
		{
			this->name = name;
			this->roll = roll;
			this->age = age;
		}
		void display1()
		{
			cout<<"The name of the student is "<<name
				<<"\nThe roll number is "<<roll
				<<"\nThe age is "<<age<<endl;
		}
};
class test:public virtual student
{
	public:
		int marks[5];
		test(string name,int roll,int age,int marks[]):
		student(name,roll,age)
		{
			for(int i=0;i<5;i++)
			this->marks[i] = marks[i];	
		}
		void display2()
		{
			cout<<"The marks in 5 subjects is:";
			for(int i=0;i<5;i++)
			cout<<" "<<marks[i]; 
		}
};
class sports:public virtual student
{
	public:
		int m;
		sports(string name,int roll,int age,int m):
		student(name,roll,age)
		{
			this->m = m;
		}
		void display3()
		{
			cout<<"\nThe marks in sports activity:";
			cout<<m<<endl; 
		}
};
class result:public test,public sports
{
	int tm;float p;
	public:
		result(string name,int roll,int age,int m,int marks[]):
		student(name,roll,age),test(name,roll,age,marks),sports(name,roll,age,m)
		{
			tm = 0;p=0.0;
		}
		void calc()
		{
			for(int i=0;i<5;i++)
			tm +=marks[i]; 
			tm +=m;
			p = (tm/600.0)*100;
		}
		void display4()
		{
			display1();
			display2();
			display3();
			cout<<"Total marks:"<<tm
				<<"\nPercentage:"<<p;
		}
};
int main()
{
	string name;
	int roll,age,marks[5],m;
	cout<<"Enter the name of the student:";
	getline(cin,name);
	cout<<"Enter the roll number and age of the student:";
	cin>>roll>>age;
	cout<<"Enter marks in 5 subjects:";
	for(int i=0;i<5;i++)
		cin>>marks[i];
	cout<<"Enter marks in sports activity:";
	cin>>m;
	result obj(name,roll,age,m,marks);
	obj.calc();
	obj.display4();
	return 0;
}