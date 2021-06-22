/*Create a class which allocates the memory for a string through dynamic constructor. 
Overload the binary + to concatenate two strings and display it.*/
#include<iostream>
#include<cstring>
using namespace std;
class add
{
	char *p;
	int len;
	public:
		add()
		{
			len = 0;
			p=0;
		}
		add(const char *s)
		{
			len = strlen(s);
			p = new char[len+1];
			strcpy(p,s);
		}
		add(const add &s)
		{
			len = s.len;
			p = new char[len+1];
			strcpy(p,s.p);
		}
		friend add operator +(const add &s,const add &t);
		friend void show(const add s);	
};
add operator+(const add &s,const add &t)
{
		add temp;
		temp.len = s.len+t.len;
		temp.p = new char[temp.len+1];
		strcpy(temp.p,s.p);
		strcat(temp.p,t.p);
		return (temp);
}
void show(const add s)
{
	cout<<s.p;
}	
int main()
{
	add s1 = "New ";
	add s2 = "York";
	add s3 = "Delhi";
	add string1,string2,string3;
	string1 = s1;
	string2 = s2;
	string3 = s1 + s3;
	cout<<"String 1 = ";show(string1);
	cout<<"\nString 2 = ";show(string2);
	cout<<"\nconcatenated string  = ";show(string3);
	cout<<"\n\n";
	return 0;
}
