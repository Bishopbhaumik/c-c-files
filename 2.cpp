/*Create a class to store an integer array. Overload insertion and extraction 
operator to input and display the array elements.*/
#include <iostream>
using namespace std;
const int size=5;
class Array
{
	int v[size];
	public:
	Array()
	{
		for(int i=0;i<size;i++)
			v[i]=0;
	}
	friend istream & operator >>(istream &,Array &);
	friend ostream & operator <<(ostream &,Array &);	
};
istream & operator >>(istream &din,Array &b)
{
	for(int i=0;i<size;i++)
	din >> b.v[i];
	return din;
}
ostream & operator <<(ostream &dout,Array &b)
{
	dout<<"("<<b.v[0];
	for(int i=1;i<size;i++)
	dout <<", "<< b.v[i];
	dout<<")";
	return dout;
}
int main()
{
	Array m;
	cout<<"Enter the 5 element of array:\n";
	cin>>m;
	cout<<"array= "<<m<<"\n";
	return 0;
}
