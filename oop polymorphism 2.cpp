#include<iostream>
using namespace std;
class arr{
    int n;
    int *p;
    public:
    arr(){p=new int[0];n=0;}
    arr(int s){p=new int[s];n=s;}
    friend ostream& operator<<(ostream &out,arr &a);
    friend istream& operator>>(istream &in,arr &a);
};
ostream& operator<<(ostream &out,arr &a){
    out<<"Array: ";
    for(int x=0;x<a.n;x++){
        out<<a.p[x]<<" ";
    }
    return out;
}
istream& operator>>(istream &in,arr &a){
    cout<<"Enter "<<a.n<<" elements for array input: ";
    for(int x=0;x<a.n;x++){
        in>>a.p[x];
    }
    return in;
}
int main(){
    int a;
    cout<<"Enter sizeof array: ";
    cin>>a;
    arr p(a);
    cin>>p;
    cout<<p;
    return 0;
}
