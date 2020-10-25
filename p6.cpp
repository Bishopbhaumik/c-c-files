#include<iostream>
using namespace std;
void increment(int& x, int y)
{
    int i;
    for(i=0;i<y;i++)
    x++;
}
int main()
{
	int x,y;
	cout<<"Enter the initial value of x :"<<endl;
	cin>>x;
	cout<<"Enter np. of times you want to increment the value :"<<endl;
	cin>>y;
	increment(x,y);
	cout<<"Incremented value :"<<x;
}
