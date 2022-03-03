#include<iostream>
using namespace std;

int main()
{
    int a[]={2,1,5,6,3};
    int l=sizeof(a)/sizeof(a[0]);
    cout<<"Len"<<l;
    return 0;
}