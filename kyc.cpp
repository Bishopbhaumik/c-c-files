#include<iostream>
using namespace std;
class books
{
    private:
        char name[100];
        char author[100];
        int price;
    public:
        void set();
    friend void get(books x[],int n);
    friend void price_range(books x[], int n,int low, int high);
};

void books::set()
{
    cout<<"Enter the name : ";
    cin>>name;
    cout<<"Enter the author :";
    cin>>author;
    cout<<"Enter the price : ";
    cin>>price;
}
void get(books x[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"Name: "<<x[i].name<<"\tAuthor: "<<x[i].author<<"\tPrice: Rs."<<x[i].price<<endl;
    }
}
void price_range(books x[], int n, int low, int high)
{
    for(int i=0;i<n;i++)
    {
        if(x[i].price>low && x[i].price<high)
        {
            cout<<"Name: "<<x[i].name<<"\tAuthor: "<<x[i].author<<"\tPrice: Rs."<<x[i].price<<endl;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    books *b;
    b=new books[n];
    for(int i=0;i<n;i++)
    {
        b[i].set();
    }
    get(b,n);
    int l,h;
    cout<<"Enter the range(low-> high) : ";
    cin>>l>>h;
    price_range(b,n,l,h);
}
