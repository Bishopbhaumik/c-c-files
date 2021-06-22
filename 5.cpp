/*WAP to add two objects of time class. Overload the operator ‘==’ to compare two objects and 
display whether they are equal or not. Overload the assignment operator.*/
#include<iostream>
using namespace std;
class time
{
	int min;
	public:
		time(){ }
		time(int x)
		{
			min=x;
		}
		void show()
		{
			cout<<min<<endl;
		}
		void operator ==(time &z)
		{
			if(min==z.min)
			cout<<"Both the given time are same";
			else 
			cout<<"Both the given time are not same";
		}	
};
int main()
{
	int min;
	cout<<"enter 1st time in minutes:";
	cin>>min;
	time obj1,obj2,obj3;
	obj1 = min;
	cout<<"enter 2nd time in minutes:";
	cin>>min;
	obj2 = min;
	obj1==obj2;
	return 0;
}
