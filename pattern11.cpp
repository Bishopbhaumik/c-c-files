#include<iostream>
#include<cmath>
using namespace std;

void pattern(int n)
{
    int i,j;
    int k=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j!=1)
                cout<<"*";
            cout<<k;
            k++;
        }
        cout<<endl;
    }
}

int main()
{
    int x;
    cout<<"Enter Size : "<<endl;
    cin>>x;
    pattern(x);
    return 0;
}